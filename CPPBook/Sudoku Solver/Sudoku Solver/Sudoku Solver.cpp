// Sudoku Solver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
const int BOARD_LENGTH = 9;
const int SQUARE_LENGTH = 3;
const char HORIZONTAL_LINE = 196;
const char VERTICAL_LINE = 179;
const char CROSS_BAR_LINE = 197;
const char DOUBLE_HORIZONTAL_LINE = 205;
const char DOUBLE_VERTICAL_LINE = 186;
const char DOUBLE_TOP_LEFT = 201;
const char DOUBLE_TOP_RIGHT = 187;
const char DOUBLE_BOTTOM_LEFT = 200;
const char DOUBLE_BOTTOM_RIGHT = 188;
const char DOUBLE_CROSS_BAR_LINE = 206;

void drawBoard(int[][BOARD_LENGTH]);

int main()
{
	int numbers[BOARD_LENGTH][BOARD_LENGTH];
	for (auto i = 0; i < BOARD_LENGTH; i++)
		for (auto j = 0; j < BOARD_LENGTH; j++)
			numbers[i][j] = 0;
	drawBoard(numbers);
	cin.get();
    return 0;
}

void drawBoard(int numbers[BOARD_LENGTH][BOARD_LENGTH])
{
	//Draw Top Line
	cout << DOUBLE_TOP_LEFT;
	for (auto x = 0; x < (BOARD_LENGTH*2)-1; x++) cout << DOUBLE_HORIZONTAL_LINE;
	cout << DOUBLE_TOP_RIGHT;
	cout << endl;

	//Draw Interior
	for (auto i = 0; i < BOARD_LENGTH; i++)
	{
		//Draws Left Border
		cout << DOUBLE_VERTICAL_LINE;

		//Draws Numbers and Vertical Lines
		for (auto j = 0; j < BOARD_LENGTH; j++)
		{
			//Draws Numbers
			cout << numbers[i][j];
			if (j == BOARD_LENGTH-1) break;
			if((j + 1)%SQUARE_LENGTH == 0)
			{
				cout << DOUBLE_VERTICAL_LINE;
			}
			else
			{
				cout << VERTICAL_LINE;
			}
		}
		
		//Draws Right Border
		cout << DOUBLE_VERTICAL_LINE;

		cout<<endl;
		//Cuts loop on last to draw last line double.
		if(i == BOARD_LENGTH - 1) break;

		//Draws Left Border
		cout << DOUBLE_VERTICAL_LINE;

		//Draws Horizontal Lines
		for (auto j = 0; j < (BOARD_LENGTH*2)-1; j++)
		{
			//Draws Numbers
			if ((i + 1) % SQUARE_LENGTH == 0)
			{
				if ((j + 1) % (SQUARE_LENGTH*2) == 0)
				{
					cout << DOUBLE_CROSS_BAR_LINE;
				}
				else
				{
					cout << DOUBLE_HORIZONTAL_LINE;
				}
				
			}
			else
			{
				cout << HORIZONTAL_LINE;
			}
		}
		//Draws Right Border
		cout << DOUBLE_VERTICAL_LINE;
		cout << endl;


	}


	//Draw Bottom Line
	cout << DOUBLE_BOTTOM_LEFT;
	for (auto x = 0; x < 17; x++) cout << DOUBLE_HORIZONTAL_LINE;
	cout << DOUBLE_BOTTOM_RIGHT;
	cout << endl;
}

