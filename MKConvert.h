#ifndef __MK_CONVERT_H
#define __MK_CONVERT_H

#include <iostream>
#include <vector>
#include "MinKlineDef.h"

inline 
void DebugOutputMinuteKLine(const MinuteKLineData& mk) {
	std::cout << "MinuteKLine size=" << mk.size() << std::endl;
	std::cout << "----------------------------------------------------------------------------------------" << std::endl;
	for (int i = 0; i < mk.size(); i++)
	{
		std::cout << "  [" << i << "]:  "
			<< "Date=" << mk[i].Date << ", "
			<< "Time=" << mk[i].Time << ", "
			<< "TodayOpen=" << mk[i].TodayOpen << ", "
			<< "TodayHigh=" << mk[i].TodayHigh << ", "
			<< "TodayLow=" << mk[i].TodayLow << ", "
			<< "TodayClose=" << mk[i].TodayClose << ", "
			<< "Volume=" << mk[i].Volume << ", "
			<< "Amount=" << mk[i].Amount << std::endl;
	}
	std::cout << "----------------------------------------------------------------------------------------" << 
		std::endl << std::endl;
}

inline 
void ConvertMK5ToPeriod(const MinuteKLineData& mk5, MinuteKLineData& mk_to,
	const MinuteKLineTimePeriods& valid_periods, const MinuteKLineTimePeriods& invalid_periods) {
	//
	mk_to.clear();

	int __pk1 = 0;
	const MinuteKLineDataItem* _pmk0 = &(mk5[__pk1]);

	std::vector<bool> _is_valids(mk5.size(), true);

	unsigned int _earliest_invalid_time_to = invalid_periods[0].TimeTo;
	unsigned int _last_invalid_time_from = invalid_periods[invalid_periods.size() - 1].TimeFrom;

	// filtered out all invalid minute kline data
	for (int i = 0; i < mk5.size(); i++)
	{
		if ((mk5[i].Time <= _earliest_invalid_time_to) || (mk5[i].Time >= _last_invalid_time_from))
			_is_valids[i] = false;
		else
		{
			for (int j = 1; j < invalid_periods.size() - 1; j++)
			{
				if ((mk5[i].Time >= invalid_periods[j].TimeFrom) && (mk5[i].Time <= invalid_periods[j].TimeTo))
				{
					_is_valids[i] = false;
					break;
				}
			}
		}
	}

	// find the first valid kline pos
	int _pk0 = -1;    // last kline position
	int _pvp0 = -1;    // last valid period position
	for (int i = 0; i < mk5.size(); i++)
	{
		if (_is_valids[i] == true)
		{
			for (int j = 0; j < valid_periods.size(); j++)
			{
				if ((mk5[i].Time >= valid_periods[j].TimeFrom) && (mk5[i].Time <= valid_periods[j].TimeTo))
				{
					_pvp0 = j;
					break;
				}
			}
			_pk0 = i;
			break;
		}
	}
	if (_pk0 == -1)   // no valid minute kline data at all
		return;

	int _prev_mk_pos = _pk0;
	unsigned int _date0 = mk5[_pk0].Date;

	MinuteKLineDataItem _mk0 = mk5[_pk0];

	for (int i = _pk0 + 1; i < mk5.size(); i++)
	{
		if (_is_valids[i] == false)
			continue;

		if (mk5[i].Date > _date0)   // new date, just be in a different period
		{
			mk_to.push_back(_mk0);

			_date0 = mk5[i].Date;
			unsigned int _time0 = mk5[i].Time;

			_mk0 = mk5[i];

			_pvp0 = 0;
			for (int j = 0; j < valid_periods.size(); j++)
			{
				if ((_time0 >= valid_periods[j].TimeFrom) && (_time0 <= valid_periods[i].TimeTo))
				{
					_pvp0 = j;
					break;
				}
			}

			continue;
		}

		// is in the same period
		if ((mk5[i].Time >= valid_periods[_pvp0].TimeFrom) && (mk5[i].Time <= valid_periods[_pvp0].TimeTo))
		{
			//			_mk0.Date = mk5[i].Date;   // Date should be the same
			_mk0.Time = mk5[i].Time;
			_mk0.TodayClose = mk5[i].TodayClose;
			_mk0.Volume += mk5[i].Volume;
			_mk0.Amount += mk5[i].Amount;
			if (_mk0.TodayHigh < mk5[i].TodayHigh)
				_mk0.TodayHigh = mk5[i].TodayHigh;
			if (_mk0.TodayLow > mk5[i].TodayLow)
				_mk0.TodayLow = mk5[i].TodayLow;
		}
		else
		{
			mk_to.push_back(_mk0);
			_mk0 = mk5[i];

			_pvp0 += 1;
			if (_pvp0 == valid_periods.size())
				_pvp0 = 0;

			for (int j = _pvp0; j < valid_periods.size(); j++)
			{
				if ((_mk0.Time >= valid_periods[j].TimeFrom) && (_mk0.Time <= valid_periods[j].TimeTo))
				{
					_pvp0 = j;
					break;
				}
			}
		}
	}

	mk_to.push_back(_mk0);

	// debug valids;
	DebugOutputMinuteKLine(mk_to);
}

#endif
