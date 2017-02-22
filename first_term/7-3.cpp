#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
const int N = 5;

//Транспонировать случайную квадратную матрицу (n,n)

void inputMatrix(int a[][N])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) a[i][j] = rand() % 11 - 5;
}

void printMatrix(int a[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) cout << setw(4) << a[i][j];
		cout << '\n';
	}
}

void transposeMatrix(int a[][N])
{
	for (int i = 0; i < N; i++)
		for (int j=i; j < N; j++) swap(a[i][j], a[j][i]);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[N][N];
	inputMatrix(a);
	printMatrix(a);
	cout << '\n';
	transposeMatrix(a);
	printMatrix(a);
	system("pause");
}