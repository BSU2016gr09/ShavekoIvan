#include <iostream>
#include <locale>
using namespace std;

//Расположить в порядке возрастания элементы массива А(N), начиная с k-го элемента.

void inputArray(int* arr, int N) {
	for (int i = 0; i < N; i++) cin >> *(arr + i);
}

void printArray(int* arr, int N) {
	for (int i = 0; i < N; i++) cout << *(arr + i) << " ";
}

void sortArray(int* arr, int N) {
	int k;
	cout << "Введите число, с которого начинаем сортировку\n";
	cin >> k;
	for (; k < N; k++)
		for (int j=k; j < N; j++)
			if (*(arr + k) > *(arr + j)) swap(*(arr + k),*(arr + j));
}

int main() {
	setlocale(LC_ALL,"Russian");
	int N;
	cin >> N;
	int* arr = new int[N];
	cout << "Введите массив\n";
	inputArray(arr, N);
	sortArray(arr, N);
	printArray(arr, N);
	delete[] arr;
	arr = nullptr;
	system("pause");
}