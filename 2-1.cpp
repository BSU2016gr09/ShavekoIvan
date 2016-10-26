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
{//%20%u041C%u0430%u0441%u0441%u0438%u0432%20%u0446%u0435%u043B%u044B%u0445%20%u0447%u0438%u0441%u0435%u043B%20%u0440%u0430%u0437%u043C%u0435%u0440%u0430%20N%20%u043F%u0440%u043E%u0438%u043D%u0438%u0446%u0438%u0430%u043B%u0438%u0437%u0438%u0440%u043E%u0432%u0430%u0442%u044C%20%u0441%u043B%u0443%u0447%u0430%u0439%u043D%u044B%u043C%u0438%20%u0447%u0438%u0441%u043B%u0430%u043C%u0438%20%u0438%u0437%20%u043F%u0440%u043E%u043C%u0435%u0436%u0443%u0442%u043A%u0430%20%u043E%u0442%201%20%u0434%u043E%20N.%20%22%u041F%u0435%u0440%u0435%u0432%u0435%u0440%u043D%u0443%u0442%u044C%22%20%u043C%u0430%u0441%u0441%u0438%u0432%20%28%u043F%u043E%u0441%u043B%u0435%u0434%u043D%u0438%u0439%20%u044D%u043B%u0435%u043C%u0435%u043D%u0442%20%u0441%u0442%u0430%u043D%u0435%u0442%20%u043F%u0435%u0440%u0432%u044B%u043C%2C%201-%u0439%20%u0441%u0442%u0430%u043D%u0435%u0442%20%u043F%u043E%u0441%u043B%u0435%u0434%u043D%u0438%u043C%2C%202-%u0439%20%u043F%u043E%u043C%u0435%u043D%u044F%u0435%u0442%u0441%u044F%20%u0441%20%u043F%u0440%u0435%u0434%u043F%u043E%u0441%u043B%u0435%u0434%u043D%u0438%u043C%20%u0438%20%u0442.%u0434.%29%20
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	coutArray(a, N);
	swapArray(a, N);
	coutArray(a, N);
	system("pause");
}