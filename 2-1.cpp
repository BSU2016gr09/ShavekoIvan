#include <iostream>
#include <locale>
using namespace std;
void createArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = rand() % N + 1;
		i++;
	}
}
void swapArray(int a[], int N)
{
	int i = 0, k = N - 1;
	if (N / 2 == 0)
	{
		while (i < N / 2)
		{
			swap(a[i], a[k]);
			i++;
			k--;
		}
	}
	else
	{
		while (i < N / 2 + 1)
		{
			swap(a[i], a[k]);
			i++;
			k--;
		}
	}
}
void coutArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		cout << a[i] << ' ';
		i++;
	}
	cout << endl;
}
int main()
{// ћассив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N. "ѕеревернуть" массив (последний элемент станет первым, 1-й станет последним, 2-й помен€етс€ с предпоследним и т.д.) 
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	coutArray(a, N);
	swapArray(a, N);
	coutArray(a, N);
	system("pause");
}