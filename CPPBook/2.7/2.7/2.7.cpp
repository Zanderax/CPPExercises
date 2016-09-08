// 2.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void calculateRise(float, int);

int main()
{
	float millsPearYear = 1.5;
	auto yearValue1 = 5, yearValue2 = 7, yearValue3 = 10;
	calculateRise(millsPearYear, yearValue1);
	calculateRise(millsPearYear, yearValue2);
	calculateRise(millsPearYear, yearValue3);
	cin.get();
    return 0;
}

void calculateRise(float risePerYear, int years)
{
	auto totalRise = risePerYear * years;
	cout << "Total rise after " << years << " years - " << totalRise << "ml" << endl;
}

