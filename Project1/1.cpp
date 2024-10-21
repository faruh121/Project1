//2. Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
// Необходимо создать третий массив минимально возможного размера, в котором 
// нужно собрать элементы обоих массивов.​
#include <iostream>
#include <vector>
#include <set>

int main() {
    setlocale(LC_ALL, "Rus");
    int M, N;
   
    // Ввод размеров массивов
    std::cout << "Введите размер первого массива A: ";
    std::cin >> M;
    std::cout << "Введите размер второго массива B: ";
    std::cin >> N;

    std::vector<int> A(M), B(N);

    // Ввод элементов первого массива
    std::cout << "Введите элементы первого массива A:\n";
    for (int i = 0; i < M; ++i) {
        std::cout << "Элемент " << (i + 1) << ": ";
        std::cin >> A[i];
    }

    // Ввод элементов второго массива
    std::cout << "Введите элементы второго массива B:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "Элемент " << (i + 1) << ": ";
        std::cin >> B[i];
    }

    // Используем множество для хранения уникальных элементов
    std::set<int> uniqueElements;

    // Добавляем элементы первого массива в множество
    for (int i = 0; i < M; ++i) {
        uniqueElements.insert(A[i]);
    }

    // Добавляем элементы второго массива в множество
    for (int i = 0; i < N; ++i) {
        uniqueElements.insert(B[i]);
    }

    // Преобразуем множество обратно в вектор (массив)
    std::vector<int> C(uniqueElements.begin(), uniqueElements.end());

    // Вывод результата
    std::cout << "Третий массив C с уникальными элементами:\n";
    for (int element : C) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}