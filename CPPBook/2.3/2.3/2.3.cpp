// 2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float stateTax = 0.04, localTax = 0.02, purchasePrice = 52, totalTax = purchasePrice * (stateTax + localTax);
	cout << totalTax;
	cin.get();
	return 0;
}