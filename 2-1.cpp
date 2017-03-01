#include <iostream>
#include <locale>

 //Реализовать линейный конгруэнтный генератор псевдослучайных чисел.
  //(a)Используя коэффициенты из википедии, например a = 4096, c = 150889, m = 714025.
  //(b)Подобрав собственные коэффициенты по правилам, не использую готовые коэффициенты из википедии.

using namespace std;

void allocateMemory(int* a, int N) {
	try {
		a = new int[N];
	}
	catch (...) {
		cout << "Нет памяти";
	}
}

void printArray(int* a, int N) {
	for (int i = 0; i < N; i++) cout << *(a + i) << " ";
	cout << "\n";
}

void randomArray1(int* a, int N) {
	cout << "Введите первый элемент массива\n";
	cin >> a[0];
	for (int i = 1; i < N; i++) a[i] = (4096 * a[i - 1] + 150889) % 714025;
}

void randomArray2(int* a, int N) {
	cout << "Введите первый элемент массива\n";
	cin >> a[0];
	for (int i = 1; i < N; i++) a[i] = (10625 * a[i - 1] + 20411) % 42500;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	int* arr;
	cin >> N;
	allocateMemory(arr, N);
	randomArray1(arr, N);
	printArray(arr, N);
	randomArray2(arr, N);
	printArray(arr, N);
	delete[] arr;
	system("pause");
}