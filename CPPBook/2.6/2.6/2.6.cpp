// 2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float payAmount = 1700.00;
	auto payPeriods = 26;
	auto annualPay = payAmount * payPeriods;
	cout << "Annual Pay - $" << annualPay;
	cin.get();
    return 0;
}

