// mk_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "MinKlineDef.h"
#include "PrepareData.h"
#include "MKConvert.h"

using namespace std;

MinuteKLineTimePeriods g10MKValidTimePeriods_ChinaA;
MinuteKLineTimePeriods g15MKValidTimePeriods_ChinaA;
MinuteKLineTimePeriods g30MKValidTimePeriods_ChinaA;
MinuteKLineTimePeriods g60MKValidTimePeriods_ChinaA;

MinuteKLineTimePeriods gMKInvalidTimePeriods_ChinaA;

void ConvertMK5ToMK60(const MinuteKLineData& mk5, MinuteKLineData& mk60) {
	ConvertMK5ToPeriod(mk5, mk60, g60MKValidTimePeriods_ChinaA, gMKInvalidTimePeriods_ChinaA);
}

void ConvertMK5ToMK30(const MinuteKLineData& mk5, MinuteKLineData& mk30) {
	ConvertMK5ToPeriod(mk5, mk30, g30MKValidTimePeriods_ChinaA, gMKInvalidTimePeriods_ChinaA);
}

void ConvertMK5ToMK15(const MinuteKLineData& mk5, MinuteKLineData& mk15) {
	ConvertMK5ToPeriod(mk5, mk15, g15MKValidTimePeriods_ChinaA, gMKInvalidTimePeriods_ChinaA);
}

void ConvertMK5ToMK10(const MinuteKLineData& mk5, MinuteKLineData& mk10) {
	ConvertMK5ToPeriod(mk5, mk10, g10MKValidTimePeriods_ChinaA, gMKInvalidTimePeriods_ChinaA);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "MinuteKLine Optimizing Test..." << endl;

	PrepareData::InitMinuteKLineTimePeriodsDef();

	MinuteKLineData mk5;
	PrepareData::PrepareMK5Data(mk5);

	MinuteKLineData mk60;
	ConvertMK5ToMK60(mk5, mk60);

	MinuteKLineData mk30;
	ConvertMK5ToMK30(mk5, mk30);

	MinuteKLineData mk15;
	ConvertMK5ToMK15(mk5, mk15);

	MinuteKLineData mk10;
	ConvertMK5ToMK10(mk5, mk10);

	return 0;
}

