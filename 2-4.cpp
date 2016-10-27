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
void mixingArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		swap(a[i], a[rand()%N]);
		i++;
	}
}
void changeArray(int a[], int b[], int N)
{
	int i = 0, k, c, tmp=N;
	while (i < N)
	{
		k = rand() % N;
		b[i] = a[k];
		i++;
	}
}
int main()
{
	int const N = 10;
	int arr[N], b[N];
	createArray(arr, N);
	coutArray(arr, N);
	mixingArray(arr, N);
	coutArray(arr, N);
	changeArray(arr, b, N);
	coutArray(b, N);
	system("pause");
}