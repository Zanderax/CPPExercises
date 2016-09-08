// 3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double gallons = 0, miles = 0, mpg = 0;
	cout << "Please enter the number of gallons. ";
	cin >> gallons;
	cout << "Please enter the number of miles. ";
	cin >> miles;
	mpg = gallons / miles;
	cout << "The number of mile per gallons is " << mpg;
	cin.ignore();
	cin.get();
    return 0;
}

