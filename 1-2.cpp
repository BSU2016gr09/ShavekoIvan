#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)//очень сложная проверка. Проще 10000<=N<99999
{
	int k = 0;
    if (N > 0 && N / floor(N) == 1)
	{
		while (N > 9)
		{
			N /= 10;
			k++;
		}
		if (k == 4);
		else exit(1);
	}
	else exit(1);
}
void maxNum(int N)
{
	int i=0, a[5];//плохое имя а
	while (N != 0)
	{
		a[i] = N % 10;
		N /= 10;
		i++;
	}
	i = 0;
	while (i < N - 1)
	{
		int j = 0, tmp = 0;
		while (j < N - 1 - i)
		{
			if (a[j + 1] < a[j])  // проще swap()ж
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 5)
	{
		cout << a[i];
		i++;
	}
}
int main()
{  //Пользователь вводит с клавиатуры пятизначное натуральное число, которое сохраняется в переменную n, проверить корректность ввода, составить и вывести на экран число из цифр введённого числа n, так, чтобы выведенное число оказалось максимальным из возможных. Например, если пользователь ввёл число 22195, то программа должна вывести число 95221.
	setlocale(LC_ALL, "Russian");
	double a; // по условию переменная n
	cout << "Введите 5тизначное натуральное число:";
	cin >> a;
	checkNum(a);
	maxNum(a);
	system("pause");
}
