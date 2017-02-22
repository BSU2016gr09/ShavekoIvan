#include <iostream>
#include <locale>
using namespace std;
//В массиве размера N, заполненного случ.числами от 0 до 10, подсчитать количество элементов, встречающихся более одного раза.
void createArray(int arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = rand() % 11;
		i++;
	}
}
void printArray(int arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i++;
	}
	cout << endl;
}
void sortArray(int arr[], int N)
{
	int i = 0;
	while (i < N-1)
	{
		int j = 0;
		while (j < N - i - 1)
		{
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);//на занятиях упоминалось как улучшить этот галимый алгоритм сортировки
			j++;
		}
		i++;
	}
}
void checkSame(int arr[], int N)
{
	int i = 0, m=0;
	while (i < N)
	{
		int j = i + 1, k=1;
		while (arr[i]==arr[j])
		{
			k++;
			j++;
		}
		if (k != 1) m++;
		i = i + k;;
	}
	cout << "Количество повторяющихся элементов = " << m;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	printArray(a, N);
	sortArray(a, N);
	printArray(a, N);
	checkSame(a, N);
	system("pause");
}
