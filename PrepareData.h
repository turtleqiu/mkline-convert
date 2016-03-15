#ifndef __PREPARE_DATA_H
#define __PREPARE_DATA_H

#include "MinKlineDef.h"

extern MinuteKLineTimePeriods g10MKValidTimePeriods_ChinaA;
extern MinuteKLineTimePeriods g15MKValidTimePeriods_ChinaA;
extern MinuteKLineTimePeriods g30MKValidTimePeriods_ChinaA;
extern MinuteKLineTimePeriods g60MKValidTimePeriods_ChinaA;

extern MinuteKLineTimePeriods gMKInvalidTimePeriods_ChinaA;

class PrepareData {
public:
	static void PrepareMK5Data(MinuteKLineData& mk5) {
		mk5.clear();

		mk5.push_back(MinuteKLineDataItem{ 20151201, 85900, 345500, 345500, 345500, 345500, 0, 0 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 90700, 345500, 345500, 345500, 345500, 0, 0 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 93000, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 93500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 95500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 101800, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 102900, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 103900, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 111100, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 112959, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 130000, 345500, 345900, 344000, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 131300, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 140000, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 141600, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 142500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 144400, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 145500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 145959, 345500, 355000, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 150500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151201, 160530, 345500, 345900, 345300, 345800, 1000, 5000 });

		mk5.push_back(MinuteKLineDataItem{ 20151202, 85900, 345500, 345500, 345500, 345500, 0, 0 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 90700, 345500, 345500, 345500, 345500, 0, 0 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 93000, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 93500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 95500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 101800, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 102900, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 103900, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 111100, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 112959, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 130000, 300000, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 131300, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 132900, 345500, 350000, 342300, 445800, 10000, 50000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 135900, 345500, 345900, 320000, 400000, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 140000, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 141600, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 142500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 144400, 345500, 400000, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 145500, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 145959, 345500, 345900, 345300, 345800, 1000, 5000 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 150500, 345500, 345900, 645300, 345800, 100000, 0 });
		mk5.push_back(MinuteKLineDataItem{ 20151202, 160530, 345500, 345900, 445300, 345800, 100000, 0 });

		mk5.push_back(MinuteKLineDataItem{ 20151203, 92959, 345500, 345500, 345500, 345500, 0, 0 });

		mk5.push_back(MinuteKLineDataItem{ 20151204, 93000, 345500, 350000, 340000, 347500, 1000, 10000 });

		mk5.push_back(MinuteKLineDataItem{ 20151205, 113000, 345500, 350000, 340000, 347500, 1000, 10000 });
		mk5.push_back(MinuteKLineDataItem{ 20151205, 144958, 345500, 350000, 340000, 347500, 10000, 100000 });
	}

	static void InitMinuteKLineTimePeriodsDef() {
		// initialize 10 minutes valid periods
		g10MKValidTimePeriods_ChinaA.clear();

		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem( 93000,  94000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem( 94001,  95000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem( 95001, 100000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(100001, 101000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(101001, 102000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(102001, 103000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(103001, 104000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(104001, 105000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(105001, 110000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(110001, 111000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(111001, 112000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(112001, 113000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(130000, 131000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(131001, 132000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(132001, 133000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(133001, 134000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(134001, 135000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(135001, 140000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(140001, 141000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(141001, 142000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(142001, 143000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(143001, 144000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(144001, 145000));
		g10MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(145001, 150000));

		// initialize 15 minutes valid Periods
		g15MKValidTimePeriods_ChinaA.clear();

		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(93000, 94500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(94501, 100000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(100001, 101500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(101501, 103000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(103001, 104500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(104501, 110000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(110001, 111500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(111501, 113000));

		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(130000, 131500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(131501, 133000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(133001, 134500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(134501, 140000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(140001, 141500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(141501, 143000));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(143001, 144500));
		g15MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(144501, 150000));

		// initialize 30 minutes valid periods
		g30MKValidTimePeriods_ChinaA.clear();

		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(93000, 100000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(100001, 103000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(103001, 110000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(110001, 113000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(130000, 133000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(133001, 140000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(140001, 143000));
		g30MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(143001, 150000));

		// initialize 60 minutes valid periods
		g60MKValidTimePeriods_ChinaA.clear();

		g60MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(93000, 103000));
		g60MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(103001, 113000));
		g60MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(130000, 140000));
		g60MKValidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(140001, 150000));

		// invaid time periods;
		gMKInvalidTimePeriods_ChinaA.clear();
		gMKInvalidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(0, 92959));
		gMKInvalidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(113001, 125959));
		gMKInvalidTimePeriods_ChinaA.push_back(MinuteKLineTimePeriodItem(150001, 235959));
	}
};

#endif
