// 8.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int NUM_OF_ACCOUNTS = 18;

int promtUser();
bool validNumber(int, int[NUM_OF_ACCOUNTS]);
bool validNumberBubble(int, int[NUM_OF_ACCOUNTS]);
void sortArray(int[NUM_OF_ACCOUNTS]);


int main()
{
	int accounts[NUM_OF_ACCOUNTS] = 
	{	
		5658845,4520125,7895122,8777541,8451277,1302850,
		8080152,4562555,5552012,5050552,7825877,1250255,
		1005231,6545231,3852085,7576651,7881200,4581002 
	};

	sortArray(accounts);
	int target = promtUser();
	bool valid = validNumberBubble(target, accounts);

	if(valid)
	{
		cout << "The number is valid." << endl;
	}
	else
	{
		cout << "The number is not valid" << endl;
	}
	system("pause");
    return 0;
}

int promtUser()
{
	cout << "Please enter an integer" << endl;
	int target;
	cin >> target;
	return target;
}

void sortArray(int accounts[NUM_OF_ACCOUNTS])
{
	for (int i = 0; i < NUM_OF_ACCOUNTS; i++)
	{
		int minIndex = -1;
		int minValue = accounts[i];
		for (int j = i+1; j < NUM_OF_ACCOUNTS; j++)
		{
			if (accounts[j] < minValue)
			{
				minIndex = j;
				minValue = accounts[j];
			}
		}
		if (minIndex >= 0)
		{
			int temp = accounts[i];
			accounts[i] = accounts[minIndex];
			accounts[minIndex] = temp;
		}
	}
}

bool validNumber(int target, int accounts[NUM_OF_ACCOUNTS])
{
	bool found = false;
	for(int i = 0; i < NUM_OF_ACCOUNTS && !found; i++)
	{
		found = (target == accounts[i]);
	}
	return found;
}

bool validNumberBubble(int target, int accounts[NUM_OF_ACCOUNTS])
{
	int lower = 0;
	int upper = NUM_OF_ACCOUNTS - 1;
	bool found = false;
	while(lower <= upper && !found)
	{
		int middle = (upper + lower) / 2;
		if (accounts[middle] == target)
		{
			found = true;
		}
		else if(target < accounts[middle])
		{
			upper = middle - 1;
		}
		else
		{
			lower = middle + 1;
		}
	}
	return found;
}