#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
const int N = 5, M = 3;

//В матрице (n,m) найти те строки и вывести их номера, элементы которых образуют возрастающую последовательность.

void inputMatrix(int a[][M])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) a[i][j] = rand() % 11 - 5;
}

void printMatrix(int a[][M])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) cout << setw(4) << a[i][j];
		cout << '\n';
	}
}

void findIncreasing(int a[][M])
{
	for (int i = 0; i < N; i++)
	{
		int flag = 0;
		for (int j = 0; j < M - 1; j++) 
		{
			int k = j + 1;
			if (a[i][j] > a[i][j + 1])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << "Строка с возрастающими элементами " << i+1 << '\n';
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[N][M];
	inputMatrix(a);
	printMatrix(a);
	findIncreasing(a);
	system("pause");
}