// 2.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	auto squareFeetPerAcre = 43560, totalSquareFeet = 389767;
	auto totalAcres = float(totalSquareFeet) / squareFeetPerAcre;
	cout << "Total Acres = " << totalAcres;
	cin.get();
    return 0;
}

