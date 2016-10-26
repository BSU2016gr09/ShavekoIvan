#include <iostream> // в начале файла нет условия задачи. И кодировка битая!!!!!
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
	if (N / 2 == 0)// Отвратительный подход. Как у индийца (((((( ПЕределать!!!!
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
{// Ìàññèâ öåëûõ ÷èñåë ðàçìåðà N ïðîèíèöèàëèçèðîâàòü ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò 1 äî N. "Ïåðåâåðíóòü" ìàññèâ (ïîñëåäíèé ýëåìåíò ñòàíåò ïåðâûì, 1-é ñòàíåò ïîñëåäíèì, 2-é ïîìåíÿåòñÿ ñ ïðåäïîñëåäíèì è ò.ä.) 
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	coutArray(a, N);
	swapArray(a, N);
	coutArray(a, N);
	system("pause");
}
