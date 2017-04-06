#include <iostream>
#include <locale>
#include <iomanip>
// В массиве А(N,М) часть строк состоит из нулей. удалить нулевые строки.
using namespace std;

void giveMemory(int **&arr, int N, int M) {
	try {
		arr = new int *[N];
		for (int i = 0; i < N; i++) {
			arr[i] = new int[M];
		}
	}
	catch (...) {
		cout << "Памяти нет ";
		exit(0);
	}
}

void initArray(int **arr, int N, int M) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) cin >> arr[i][j];
}

void printArray(int **arr, int N, int M) {
	for (int i = 0; i < N; i++) {
		if (arr[i] != nullptr) {//лишнее условие внутри if
			for (int j = 0; j < M; j++) cout << setw(4) << arr[i][j];
			cout << endl;
		}
	}
	cout << endl;
}

void deleteNull(int **arr, int N, int i) {//Зачем сюда передавать N???
	delete[]  arr[i];
	arr[i] = nullptr;//я бы просто сюда передавал следующую строку, например... Или как-то еще переставлял строки в матрице
}

void findNull(int**arr, int N, int M) {
	for (int i = 0; i < N; i++) {
		int flag = 0;
		for (int j = 0; j < M; j++) {
			if (arr[i][j] != 0) flag = 1;
			break;
		}
		if (flag == 0) deleteNull(arr, N, i); //лишнее условие внутри if
	}
}

void deleteMemory(int** arr, int N) {
	for (int i = 0; i < N; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N, M;
	cout << "Введите количество строк\n";
	cin >> N;
	cout << "Введите количество столбцов\n";
	cin >> M;
	int **arr;
	giveMemory(arr, N, M);
	initArray(arr, N, M);
	printArray(arr, N, M);
	findNull(arr, N, M);
	printArray(arr, N, M);
	deleteMemory(arr, N);
	system("pause");
}
