#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

/*Даны точки плоскости своими координатами в виде двух одномерных массивов.
Точки плоскости рассортировать по возрастанию расстояния до прямой ax + by + c = 0.*/

void inputArray(int* x, int* y, int N) {
	for (int i = 0; i < N; i++)
	{
		cin >> *(x + i);
		cin >> *(y + i);
	}
}

void printArray(int* x, int* y, int N) {
	for (int i = 0; i < N; i++) cout << "(" << x << ";" << y << ") ";
}

void countDistance(int* x, int* y, int* distance, int a, int b, int c, int N) {
	for (int i = 0; i < N; i++) *(distance + i) = abs(a * x[i] + b * y[i] + c) / sqrt(a * a + b * b);
}

void sortDistance(int* distance, int* x, int* y, int N) {
	for (int i=0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (*(distance + i) > *(distance + j))
			{
				swap(*(distance + i), *(distance + j));
				swap(*(x + i), *(x + j));
				swap(*(y + i), *(y + j));
			}
}

int main() {
	int N, a, b, c;
	cin >> N;
	int* x = new int[N]; //Где выделение и контроль динамической памяти??? Почему выделение не в отдельной функции???
	int* y = new int[N];//Где выделение и контроль динамической памяти??? Почему выделение не в отдельной функции???
	int* distance = new int[N];//Где выделение и контроль динамической памяти??? Почему выделение не в отдельной функции???
	cout << "Введите коффициенты a, b, c уравнения прямой\n";
	cin >> a;
	cin >> b;
	cin >> c;
	inputArray(x, y, N);
	countDistance(x, y, distance, a, b, c, N);
	sortDistance(distance, x, y, N);
	printArray(x, y, N);
	delete[] x;
	x = nullptr;
	delete[] y;
	y = nullptr;
	delete[] distance;
	distance = nullptr;
	system("pause");
}
