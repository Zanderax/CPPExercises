// 3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int aSeats = 0, bSeats = 0, cSeats = 0, totalIncome = 0;
	cout << "Enter number of A seats sold. ";
	cin >> aSeats;
	cout << "Enter number of B seats sold. ";
	cin >> bSeats;
	cout << "Enter number of C seats sold. ";
	cin >> cSeats;
	totalIncome = aSeats * 15 + bSeats * 12 + cSeats * 9;
	cout << "Total income = $" << totalIncome;
	cin.ignore();
	cin.get();
    return 0;
}

