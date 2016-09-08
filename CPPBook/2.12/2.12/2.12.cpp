// 2.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	auto sellingPriceRatio = 1.4, productionPrice = 12.67, sellingPrice = sellingPriceRatio * productionPrice;
	cout << "Total Selling Price = $" << sellingPrice;
	cin.get();
    return 0;
}

