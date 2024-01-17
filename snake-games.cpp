#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
bool gameOver;
const int width = 30;
const int height = 10;
int x, y, fruitX, fruitY , scores ;	
int tailX[100], tailY[100];
int nTail =0;
enum eDirection { STOP = 0, LEFT, RIGHT, UP ,DOWN };
eDirection dir;
void setUp()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	scores = 0;
}
void Draw()
{
	system("cls");
	for (int i = 0; i < width ; i++)
		cout << "#";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << '#';
			else if (j == width - 1)
				cout << '#';
			else if (j == x && i == y)
				cout << "0";
			else if (j == fruitX && i == fruitY)
				cout << "8";
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}

		}
		cout << endl;
	}

	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
	cout << "Scores:" << scores << endl;
}
void Input()
{
	if (_kbhit()) // if nothing is press it return 0
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		default:
			gameOver = true;
			break;
		}
	}
}
void Logic()
{
	int prevX = tailX[0]; 
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;

	}
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case  DOWN:
		y++;
		break;
	default:
		break;
	}
	if (x >= width || x <0 || y > height || y < 0)
		gameOver = true;
	for (int i = 0; i < nTail ; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;
	}
	if (x == fruitX && y == fruitY)
	{
		scores += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail+=1;
	}


}
int main()
{
	setUp();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(50);		//Slow our game
	}
	return 0;
}
