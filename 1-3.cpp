#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
void checkNum(double N)
{
	if (N <= 100 && N > 0 && floor(N) == N);
	else exit(1);
}
void inPut(int a[], int N)
{
	int i = 0;
	while (i < 10)
	{
		a[i] = rand() % (3 * N + 1) - 2 * N;
		i++;
	}
}
void coutMassive(int a[])
{
	int i = 0;
	while (i < 10)
	{
		cout << a[i] << ' ';
		i++;
	}
}
void positiveMembers(int a[])
{
	int i = 0, k=0;
	while (i < 10)
	{
		if (a[i] > 0 && a[i] % 2 == 0) k++;
		i++ ;
	}
	cout <<endl<<"���������� ������������� ������ ����� = " <<k;
}
int main()
{ //������������ ������ � ���������� ����������� ����� �� ������� 100, ������� ����������� � ���������� n, ��������� ������������ �����, ������� ������ �� 10 ��������� ����� ����� �� ������� [-2n;n], ������� ������ �� ����� � ������, ���������� � � ������� �� ����� ���������� ������������� ������ ����� � �������.
	setlocale(LC_ALL, "Russian");
	double a;
	int b[10];
	cout << "������� ����������� �����: ";
	cin >> a;
	checkNum(a);
	inPut(b, a);
	coutMassive(b);
	positiveMembers(b);
	system("pause");
}