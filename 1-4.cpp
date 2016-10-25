#include <iostream>
#include <locale>
using namespace std;
void createArray(float a[], int N)
{
	int i = 1;
	while (i <= N)
	{
		a[i] = rand() % 101 - 50;
		i++;
	}
}
void putInArray(float a[], int N)
{
	int i = 1;
	while (i <= N)
	{
		cout << a[i] << ' ';
		i++;
	}
}
void coutEven(float a[],int N)
{
	int i = 1;
	while (i <= N)
	{
		if (i % 2 != 0) cout << a[i]<<' ';
		i++;
	}
}
void coutOdd(float a[], int N)
{
	int i = 1;
	while (i <= N)
	{
		if (i % 2 == 0) cout << a[i]<<' ';
		i++;
	}
}
int main()
{   // ќбъ€вить массив вещественных чисел размера N (число N объ€вить как константу). ѕроинициализировать значени€ элементов массива случайными числами из промежутка от -50 до 50.
	const int N = 10;
	float a[N];
	createArray(a, N);
	putInArray(a, N);
	cout << endl;
	coutEven(a, N);
	cout << endl;
	coutOdd(a, N);
	system("pause");
}