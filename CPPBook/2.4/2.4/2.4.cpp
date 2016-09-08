// 2.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	auto mealCharge = 44.5, taxPercentage = 0.0675, tipPercentage = 0.15;
	auto taxTotal = mealCharge * taxPercentage, tipTotal = (mealCharge + taxTotal) * tipPercentage;
	auto totalBill = mealCharge + taxTotal + tipTotal;
	cout << "Meal Charge - " << mealCharge << endl;
	cout << "Tax Charge - " << taxTotal << endl;
	cout << "Tip Charge - " << tipTotal << endl;
	cout << "Total Charge - " << totalBill << endl;
	cin.get();
	return 0;
}