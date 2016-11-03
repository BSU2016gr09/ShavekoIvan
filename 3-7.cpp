#include <iostream>
#include <locale>
using namespace std;
//Реализовать функции для работы с очередью. Продемонстрировать их работоспособность вызывая из main. Показать, что очередь размера 4 не переполняется. Если добавить 3 элемента, потом удалить 2, а потом еще раз добавить 3 элемента.
void putQueue(int q[], int N, int&last, int a)
{
	last = (last + 1) % N;
	q[last]=a;
}
int getQueue(int q[], int N, int&first)
{
	first = (first + 1) % N;
	return q[first];
}
int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 4;
	int q[N], last=0, first=0, i=0, a;
	while (i < 3)
	{
		cin >> a;
		putQueue(q, N, last, a);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		cout<<getQueue(q, N, first)<<' ';
		i++;
	}
	i = 0;
	while (i < 3)
	{
		cin >> a;
		putQueue(q, N, last, a);
		i++;
	}
	system("pause");
}
