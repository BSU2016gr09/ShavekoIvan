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
{// ������������ ������ � ���������� ����������� �����, ��������� ������������ �����, ��������� � ������� �� ����� ����� ���� ��������� ������������� �����.
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "������� ����������� �����:";
	cin >> a;
	checkNum(a);
	cout <<"����� ��� ���� = "<< sumNumber(a);
	system("pause");
}