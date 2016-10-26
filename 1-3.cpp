#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)
{
	if (N <= 100 && N > 0 && floor(N) == N);
	else exit(1);
}
void inPut(int a[], int N)//что за имя функции?????
{
	int i = 0;
	while (i < 10)//совсем плохо! Что за константа 10?
	{
		a[i] = rand() % (3 * N + 1) - 2 * N;
		i++;
	}
}
void coutMassive(int a[])
{
	int i = 0;
	while (i < 10)//совсем плохо! Что за константа 10?
	{
		cout << a[i] << ' ';
		i++;
	}
}
void positiveMembers(int a[])
{
	int i = 0, k=0;
	while (i < 10)//совсем плохо! Что за константа 10?
	{
		if (a[i] > 0 && a[i] % 2 == 0) k++;//плохое имя k
		i++ ;
	}
	cout <<endl<<"Количество положительных четных чисел = " <<k;
}
int main()
{ //Пользователь вводит с клавиатуры натуральное число не большее 100, которое сохраняется в переменную n, проверить корректность ввода, создать массив из 10 случайных целых чисел из отрезка [-2n;n], вывести массив на экран в строку, подсчитать и и вывести на экран количество положительных чётных чисел в массиве.
	setlocale(LC_ALL, "Russian");
	double a;
	int b[10];
	cout << "Введите натуральное число: ";
	cin >> a;
	checkNum(a);
	inPut(b, a);
	coutMassive(b);
	positiveMembers(b);
	system("pause");
}
