#include <iostream>
#include <locale>
using namespace std;
//В массиве размера N, заполненного случ.числами от 0 до 10, определить максимальную длину последовательности равных элементов.
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
int checkLong(int arr[], int N)
{
	int i = 0, max=0;
	while (i < N)
	{
		int k = 1, j = i+1;
		while (j < N)
		{
			if (arr[i] == arr[j]) k++;
			else
				if (k > max) max = k;
			j++;
		}
		i = i + k;
	}
	return max;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int a[N];
	createArray(a, N);
	printArray(a, N);
	cout <<"Максимальную длину последовательность равных элементов равна " << checkLong(a, N);
	system("pause");
}