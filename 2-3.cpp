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
		cout << a[i++] << ' ';
	}
	cout << endl;
}
void rightArray(int a[], int N, int&k,int b[])
{
	int i = 0;
	while (i < N)
	{
		int j = (i + k) % N;
		b[j] = a[i];
		i++;
	}
}
void leftArray(int a[], int N, int&k, int b[])
{
	int i = 0;
	while (i < N)
	{
		int j = (N + i - k)%N;
		b[j] = a[i];
		i++;
	}
}
int main()
{
	const int N = 10;
	int arr[N], k;
	int b[N];// Это что еще за доп. массив!!!! В условии надо делать все в arr
	cin >> k;
	createArray(arr, N);
	coutArray(arr, N);
	rightArray(arr, N, k, b);
	coutArray(b, N);
	leftArray(arr, N, k,b);
	coutArray(b, N);
	system("pause");
}
