// 2.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	auto mpgTown = 21.5, mpgHighway = 26.8;
	auto gas = 20;
	auto totalTown = mpgTown * gas, totalHighway = mpgHighway * gas;
	cout << "Total Miles In Town = " << totalTown << " miles." << endl;
	cout << "Total Miles On Highway = " << totalHighway << " miles." << endl;
	cin.get();
    return 0;
}

