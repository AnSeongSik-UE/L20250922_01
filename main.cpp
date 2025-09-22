#include <iostream>	// cpp standard
#include <conio.h>	// c standard
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//LoadLevel
int World[10][10] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

//»ç»ó(Mapping)
char Sprites[10] = { ' ', '*', };

int KeyCode;

void Input()
{
	//Input
	KeyCode = _getch();
}

void Process()
{
	//Process
	if (KeyCode == 'w')
	{
		PlayerY--;
	}
	else if (KeyCode == 's')
	{
		PlayerY++;
	}
	else if (KeyCode == 'a')
	{
		PlayerX--;
	}
	else if (KeyCode == 'd')
	{
		PlayerX++;
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	//Render();
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else
			{
				cout << Sprites[World[Y][X]];
			}
		}
		cout << endl;
	}
}

int main() 
{
	//char Greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	//char Greeting[6] = "Hello";
	string Greeting1 = "Hello";
	string Greeting2 = "World";

	cout << Greeting1 + " " + Greeting2 << endl;

	//// Frame, DeltaSeconds(1/60)
	//while(bIsRunning)
	//{
	//	Input();
	//	Process();
	//	Render();
	//}

	return 0;
}