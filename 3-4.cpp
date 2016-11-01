#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
//Окончательно реализовать функции для работы стека на массиве.Сделать парные ф - ции push / pop для массива double и для массива char.Создать стек чисел и стек символов.Продемонстрировать их работоспособность вызывая их из main.В частности, показать, что стек не переполняется
void  stackPush(double stack[], int&top, double b, int N)
{
	if (top == N)
	{
		cout << "Стек переполнен"<<endl;
		return;
	}
	else
	{
		stack[top] = b;
		top++;
	}
}
int stackPop(double stack[], int&top)
{
	if (top == 0)
	{
		cout << "Стек пуст"<<endl;
		return 0;
	}
	else
	{
		top--;
		return  stack[top];
	}
}
void  stackPushSym(char stack[], int&top, char b, int N)
{
	if (top == N)
	{
		cout << "Стек переполнен"<<endl;
		return;
	}
	else
	{
		stack[top] = b;
		top++;
	}
}
char stackPopSym(char stack[], int top)
{
	if (top == 0)
	{
		cout << "Стек пуст"<<endl;
		return 0;
	}
	else
	{
		top--;
		return stack[top];
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int top = 0, i=0;
	double  st[N], a[N], b;
	char  stSym[N];
	char  c[] = "gidofmrkf,rfl";
	int K = strlen(c);
	while (i <= N)
	{
		b = i;
		stackPush(st, top, b, N);
		i++;
	}
	i = 0;
		while (i < N)
		{
			cout <<stackPop(st, top)<<' ';
			i++;
		}
		i = 0;
	top = 0;
	while (i < K)
	{
		stackPushSym(stSym, top, c[i], N);
	i++;
	}
	system("pause");
}