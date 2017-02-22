#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
const int N = 5, M = 5;

//Найти в случайной матрице седловую точку если она там есть. Седловой точкой называется элемент матрицы который является минимумом в строке и максимумом в столбце.

void inputMatrix(int a[][M])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) a[i][j] = rand() % 11;
}


void printMatrix(int a[][M])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) cout << setw(4) << a[i][j];
		cout << '\n';
	}
}

void findSaddle(int a[][M])
{
	for (int i = 0; i < N; i++) {
		int min = a[i][0], k=0, flag=0;
		for (int j = 1; j < M; j++)
			if (a[i][j] < min)
			{
				min = a[i][j];
			    k = j;
			}
		for (int i = 0; i < N; i++)
			if (a[i][k] > min)
			{
				flag = 1;
				break;
			}
		if (flag == 0) cout << "Точка " << min << " является седловой точкой в столбце " << k + 1 << '\n';
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[N][M];
	inputMatrix(a);
	printMatrix(a);
	findSaddle(a);
	system("pause");
}