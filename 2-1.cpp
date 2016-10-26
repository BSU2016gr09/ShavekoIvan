#include <iostream> 
#include <locale>
using namespace std;
void createArray(int a[], int N)
// Массив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N. "Перевернуть" массив (последний элемент станет первым, 1-й станет последним, 2-й поменяется с предпоследним и т.д.) 
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
		while (i < N / 2)
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
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	coutArray(a, N);
	swapArray(a, N);
	coutArray(a, N);
	system("pause");
}
