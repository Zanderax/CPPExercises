// 2.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33;
	float numberOfValues = 5;
	auto total = var1 + var2 + var3 + var4 + var5;
	auto average = total / numberOfValues;
	cout << "Average = " << average;
	cin.get();
    return 0;
}

