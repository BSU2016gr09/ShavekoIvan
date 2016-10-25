#include <iostream>
#include <locale>
using namespace std;
void createArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = rand() % 101 - 50;
		i++;
	}
}
void putInArray(int a[], int N)
{
	int i = 0;
	while (i < N)
	{
		cout << a[i] << ' ';
		i++;
	}
}
void createPosNeg(int a[], int N, int b[], int c[], int&j, int&k)
{
	int i = 0;
	while (i < N)
	{
		if (a[i] > 0)
		{
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
		i++;
	}
}

int main()
{   //�������� ������ � ������������ ����� ������� N (����� N �������� ��� ���������). ������������������� �������� ��������� ������� ���������� ������� �� ���������� �� -50 �� 50. 
//��������� ������ � �� ��� ������� : ������������� �������� � ������ �, ������������� - � �.
	const int N = 10;
	int a[N],  b[N],  c[N];
	int j = 0, k = 0;
	createArray(a, N);
	putInArray(a, N);
	cout << endl;
	createPosNeg(a, N, b, c, j, k);
	cout << endl;
	putInArray(b, j);
	cout << endl;
	putInArray(c, k);
	system("pause");
}