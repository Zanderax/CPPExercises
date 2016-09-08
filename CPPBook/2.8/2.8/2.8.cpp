// 2.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
	auto subtotal = item1 + item2 + item3 + item4 + item5;
	auto taxPercentage = 0.06;
	auto totalTax = subtotal * taxPercentage;
	auto total = subtotal + totalTax;
	cout << "Item 1 - $" << item1 << endl;
	cout << "Item 2 - $" << item2 << endl;
	cout << "Item 3 - $" << item3 << endl;
	cout << "Item 4 - $" << item4 << endl;
	cout << "Item 5 - $" << item5 << endl;
	cout << "Subtotal - $" << subtotal << endl;
	cout << "Tax - $" << totalTax << endl;
	cout << "Total - $" << total << endl;
	cin.get();
    return 0;
}

