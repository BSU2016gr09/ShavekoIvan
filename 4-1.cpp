#include <iostream>
#include <locale>
const int N = 100;
using namespace std;
//Реализовать операции целочисленной арифметики на массивах
void printNum(int arr[])
{
	int i = N-1;
	while (i>=0) cout << arr[i--];
	cout << '\n';
}
void inputArray(int arr[])
{
	int i = 0;
	cin >> arr[i++];
	
}
void Sum(int a[], int b[], int rez[])
{
	int i = 0, t=0;
	while (i < N)
	{
		rez[i] = a[i] + b[i] + t;
		t = rez[i] / 10;
		rez[i] %= 10;
		i++;
	}
}
void Diff(int a[], int b[], int rez[])
{
	int i = 0;
	while (i < N)
	{
		if (a[i] >= b[i]) rez[i] = a[i] - b[i];
		else
		{
			a[i + 1] -= 1;
			rez[i] = a[i] - b[i] + 10;
		}
		i++;
	}
}

int main()
{
	int a[N], b[N], r[N];
	inputArray(a);
	printNum(a);
	inputArray(b);
	printNum(b);
	Sum(a, b, r);
	printNum(r);
	Diff(a, b, r);
	printNum(r);
	system("pause");
}
