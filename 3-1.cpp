#include <iostream>
#include <clocale>
using namespace std;
//Напишите игру в кости между человеком и компьютером. Они по очереди кидают по два кубика. Побеждает тот у кого сумма больше. Игра заканчивается если набрана сумма >50
void drawCube(int n)
{
	switch (n)
	{
	case 1: cout << "-----\n" << "|   |\n" << "| 0 |\n" << "|   |\n" << "-----\n"; break;
	case 2: cout << "-----\n" << "|0  |\n" << "|   |\n" << "|  0|\n" << "-----\n"; break;
	case 3: cout << "-----\n" << "|0  |\n" << "| 0 |\n" << "|  0|\n" << "-----\n"; break;
	case 4: cout << "-----\n" << "|0 0|\n" << "|   |\n" << "|0 0|\n" << "-----\n"; break;
	case 5: cout << "-----\n" << "|0 0|\n" << "| 0 |\n" << "|0 0|\n" << "-----\n"; break;
	case 6: cout << "-----\n" << "|0 0|\n" << "|0 0|\n" << "|0 0|\n" << "-----\n"; break;
	}
}
void throwCube(int&n)
{
	n = rand() % 6 + 1;
	drawCube(n);
}
void playGame(int yourpoints, int computerpoints)
{
	while (yourpoints <= 50 && computerpoints <= 50)
	{
		int i = 0, n=0;
		cout << "Ваши кости:\n";
		while (i < 2)
		{
			throwCube(n);
			yourpoints +=n;
			i++;
		}
		i = 0;
		cout << "Кости компьютера:\n";
		while (i < 2)
		{
			throwCube(n);
			i++;
			computerpoints += n;
		}
	}
}
	void checkResult(int yourpoints, int computerpoints)
	{
        if (yourpoints > computerpoints) cout << "Вы победили";
		else if (yourpoints < computerpoints) cout << "Вы проиграли";
		else cout << "Ничья";
	}
int main()
{
	int yourpoint = 0, computerpoint = 0;
	setlocale(LC_ALL, "Russian");
	playGame(yourpoint, computerpoint);
	checkResult(yourpoint, computerpoint);
	system("pause");
}