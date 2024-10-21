//1. Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать элементы массива A, которые не включаются в массив B.

#include <iostream>
#include <cstdlib>
#include<ctime>
int main() {
	setlocale(LC_ALL, "Rus");
	int A_SIZE, B_SIZE;

	std::srand(std::time(0));
	std::cout << "Введите размер масива A: ";
	std::cin >> A_SIZE;
	std::cout << "Введите размер масива B: ";
	std::cin >> B_SIZE;



	int* A = new int[A_SIZE] {};
	int* B = new int[B_SIZE] {};
	int C_SIZE = 0;
	int* C = new int[A_SIZE];

	for (int i = 0; i < A_SIZE; ++i) {
		A[i] = std::rand() % 10;
	}
	for (int i = 0; i < B_SIZE; ++i) {
		B[i] = std::rand() % 10;
	}

	for (int ia = 0; ia < A_SIZE; ++ia) {
		bool not_found = true;
		for (int ib = 0; ib < B_SIZE; ++ib) {
			if (A[ia] == B[ib]) {
				not_found = false;
				break;
			}
		}

		if (not_found) {
		
			C_SIZE += 1;
			C[C_SIZE - 1] = A[ia];
		}
		
	}
	for (int i = 0; i < A_SIZE; ++i) {
		std::cout << A[i] << ' ';
	}std::cout << "\n";
	for (int i = 0; i < B_SIZE; ++i) {
		std::cout << B[i] << ' ';
	}std::cout << "\n";
	for (int i = 0; i < C_SIZE; ++i) {
		std::cout << C[i] << ' ';
	}std::cout << "\n";






	

	delete[]A;
	delete[]B;
	delete[]C;
}



