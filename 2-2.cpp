#include <iostream>
#include <locale>

//Реализуйте алгоритм XORShift нахождения псевдослучайных чисел в качестве отдельной функции

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

void randomArray(int* a, int N) {
	int tmp;
	cout << "Введите первый элемент массива\n";
	cin >> a[0];
	for (int i = 1; i < N; i++) {
		tmp ^= a[i - 1] << 13;
		tmp ^= tmp >> 15;
		a[i] ^= tmp << 5;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	int* arr;
	cin >> N;
	allocateMemory(arr, N);
	randomArray(arr, N);
	printArray(arr, N);
	delete[] arr;
	system("pause");
}