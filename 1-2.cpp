#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)
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
	int i=0, a[5];
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
			if (a[j + 1] < a[j])
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
{  //������������ ������ � ���������� ����������� ����������� �����, ������� ����������� � ���������� n, ��������� ������������ �����, ��������� � ������� �� ����� ����� �� ���� ��������� ����� n, ���, ����� ���������� ����� ��������� ������������ �� ���������. ��������, ���� ������������ ��� ����� 22195, �� ��������� ������ ������� ����� 95221.
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "������� 5��������� ����������� �����:";
	cin >> a;
	checkNum(a);
	maxNum(a);
	system("pause");
}