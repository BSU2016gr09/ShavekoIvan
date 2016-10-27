#include <iostream>
using namespace std;
void createArray(int a[], int N)
// Массив целых чисел размера N проинициализировать случайными числами из промежутка от -N до N. Циклически сдвинуть элементы массива вправо на 1 элемент (последний элемент станет первым, 1-й станет 2-м, 2-й станет 3-м и т.д.) потом циклически сдвинуть элементы массива влево на 1 элемент (первый элемент станет последним, 2-й станет 1-м и т.д)
{
	int i = 0;
	while (i < N)
	{
		a[i] = rand() % (2 * N + 1) - N;
		i++;
	}
}
void leftArray(int a[], int N)
{
	int i = 0;
	while (i < N-1)
	{
	        swap(a[i], a[i + 1]);
		i++;
	}
}
void rightArray(int a[], int N)
{
	int i = N-1;
	while (i > 0)
	{
		swap(a[i], a[i-1]);
		i++;
	}
}
void coutArray(int a[], int N)
{
	int i = 0;
	while(i<N)
	{
		cout << a[i]<<' ';
		i++;
	}
	cout << endl;
}
int main()
{
	const int N = 9;
	int arr[N];
	createArray(arr, N);
	coutArray(arr, N);
	rightArray(arr, N);
	coutArray(arr, N);
	leftArray(arr, N);
	coutArray(arr, N);
	system("pause");
}
