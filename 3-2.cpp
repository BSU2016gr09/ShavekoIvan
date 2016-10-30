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
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
			j++;
		}
		i++;
	}
}
void checkSame(int arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		int k = 1, j = i + 1;
		while (j < N)
		{
			if (arr[i] == arr[j]) k++;
			j++;
		}
		if (k > 1) cout << "Элемент " << arr[i] << " повторяется " << k << " раза" << endl;
		i = i + k;
	}
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