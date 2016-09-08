// 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float salesPercentage = 0.62;
	int totalSales = 4600000;
	int eastCoastTotal = salesPercentage * totalSales;
	cout << eastCoastTotal;
	cin.get();
	return 0;
}


