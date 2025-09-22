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
		if( PlayerY > 1)
		{
			PlayerY--;
		}
	}
	else if (KeyCode == 's')
	{
		if (PlayerY < 8)
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (PlayerX > 1)
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (PlayerX < 8)
		{
			PlayerX++;
		}
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
	// Frame, DeltaSeconds(1/60)
	while(bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}