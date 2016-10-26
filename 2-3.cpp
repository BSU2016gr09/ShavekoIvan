#include <iostream>
using namespace std;
//Массив А целых чисел размера N проинициализировать случайными числами из промежутка от -N до N. Не используя функции из задачи 2-2 Написать функции циклического сдвига элементов массива вправо на k элементов (1-й станет 1+k -ым, 2-й станет 2+k -ым и т.д.) и влево на k элементов. В main написать вызов этих функций для числа k, которое вводит пользователь. (k может быть в частности =0, тогда сдвига нет, k=1 - задача аналогично предыдущей 2-2.cpp и т.д)
void createArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = rand() % (2 * N + 1) - N;
		i++;
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
void rightArray(int a[], int N, int&k)
{
	int j = 0;
	while (j < k)
	{
		int i = N - 1;
		int tmp = a[N - 1];
		while (i > 0)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[0] = tmp;
		j++;
	}
}
void leftArray(int a[], int N, int&k)
{
	int j = 0;
	while (j < k)
	{
		int i = 0;
		int tmp = a[0];
		while (i < N-1)
		{
			a[i] = a[i + 1];
			i++;
		}
		a[N-1] = tmp;
		j++;
	}
}
int main()
{
	const int N = 10;
	int arr[N], k;
	cin >> k;
	createArray(arr, N);
	coutArray(arr, N);
	rightArray(arr, N, k);
	coutArray(arr, N);
	leftArray(arr, N, k);
	coutArray(arr, N);
	system("pause");
}