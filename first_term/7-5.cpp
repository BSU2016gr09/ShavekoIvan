#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
const int N = 5, M = 5;

//В матрице (n,m) удалить нулевые строки (из одних нулей), "подтянув" все остальные вверх

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

void delString(int a[][M], int i) {
	for (i; i < N; i++)
		for (int j = 0; j < M; j++) a[i + 1][j] = a[i][j];
}

void checkNull(int a[][M])
{
	for (int i = 0; i < N; i++) {
		int flag = 0;
		for (int j = 0; j < M; j++) {
			if (a[i][j] != 0) { flag = 1; return; }
		}
		if (flag == 0) delString(a, i);
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int a[N][M];
	inputMatrix(a);
	printMatrix(a);
	checkNull(a);
	printMatrix(a);
	system("pause");
}