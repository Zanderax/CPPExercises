// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const short SIZE = 5;
	char word[SIZE];
	cin >> word;
	int x =0;
	while (x < 100)
	{
		
		cout << static_cast<unsigned>(word[x])<< endl;
		x++;
	}
		
	cout << word[6] << endl;
	system("pause");
    return 0;
}

