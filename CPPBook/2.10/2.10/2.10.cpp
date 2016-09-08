// 2.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float miles = 350, gas = 12;
	float mpg = miles / gas;
	cout << "Miles per Gallon = " << mpg;
	cin.get();
    return 0;
}

