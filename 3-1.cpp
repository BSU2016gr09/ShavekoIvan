#include <iostream>
#include <clocale>
using namespace std;
//�������� ���� � ����� ����� ��������� � �����������. ��� �� ������� ������ �� ��� ������. ��������� ��� � ���� ����� ������. ���� ������������� ���� ������� ����� >50
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
		cout << "���� �����:\n";
		while (i < 2)
		{
			throwCube(n);
			yourpoints +=n;
			i++;
		}
		i = 0;
		cout << "����� ����������:\n";
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
        if (yourpoints > computerpoints) cout << "�� ��������";
		else if (yourpoints < computerpoints) cout << "�� ���������";
		else cout << "�����";
	}
int main()
{
	int yourpoint = 0, computerpoint = 0;
	setlocale(LC_ALL, "Russian");
	playGame(yourpoint, computerpoint);
	checkResult(yourpoint, computerpoint);
	system("pause");
}