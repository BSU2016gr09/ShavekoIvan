#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
const int N = 5, M = 5;

//Найти в случайной матрице минимум в каждом столбце.

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

void minIncolumn(int a[][M])
{
	for (int j = 0; j < M; j++) {
		int min = a[0][j];
		for (int i = 1; i < N; i++)
			if (a[i][j] < min) min = a[i][j];
		cout << "Минимальный элемент в столбце " << j+1 << " равен " << min << '\n';
	}
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	int a[N][M];
	inputMatrix(a);
	printMatrix(a);
	minIncolumn(a);
	system("pause");
}