#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)
{
	if (N > 0 && floor(N) == N);
	else exit(1);
}
int sumNumber(int n)
{
	int sum=0;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
  }
	return sum;
}
int main()
{// Пользователь вводит с клавиатуры натуральное число, проверить корректность ввода, вычислить и вывести на экран сумму цифр введённого пользователем числа.
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "Введите натуральное число:";
	cin >> a;
	checkNum(a);
	cout <<"Сумма его цифр = "<< sumNumber(a);
	system("pause");
}