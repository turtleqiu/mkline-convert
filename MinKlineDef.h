#ifndef __MINKLINE_DEF_H
#define __MINKLINE_DEF_H

#include <vector>

typedef struct MinuteKLineDataItem
{
	unsigned int Date;
	unsigned int Time;
	int TodayOpen;
	int TodayHigh;
	int TodayLow;
	int TodayClose;
	__int64 Volume;
	__int64 Amount;
} MinuteKLineDataItem;

typedef std::vector<MinuteKLineDataItem> MinuteKLineData;


typedef struct MinuteKLineTimePeriodItem
{
	unsigned int TimeFrom;    // HHMMss
	unsigned int TimeTo;      // HHMMss

	MinuteKLineTimePeriodItem(const unsigned int _time_from, const unsigned int _time_to)
		: TimeFrom(_time_from), TimeTo(_time_to)
	{}
} MinuteKLineTimePeriodItem;

typedef std::vector<MinuteKLineTimePeriodItem> MinuteKLineTimePeriods;

#endif
