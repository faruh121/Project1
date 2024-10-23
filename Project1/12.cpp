#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Функция для генерации случайного байтового массива заданной длины
vector<uint8_t> generateByteArray(size_t length) {
    vector<uint8_t> byteArray(length);
    for (size_t i = 0; i < length; ++i) {
        byteArray[i] = rand() % 256; // Генерация случайного байта
    }
    return byteArray;
}

// Функция для печати байтового массива в шестнадцатеричном формате
void printByteArray(const vector<uint8_t>& byteArray) {
    for (uint8_t byte : byteArray) {
        cout << hex << setw(2) << setfill('0') << (int)byte << " "; // Печать в шестнадцатеричном формате
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    size_t arrSize, byteArrayLength;

    // Ввод размеров
    cout << "Введите размер массива (arr): ";
    cin >> arrSize;
    cout << "Введите минимальную длину БМ: ";
    cin >> byteArrayLength;

    // Создание массива байтовых массивов
    vector<vector<uint8_t>> arr(arrSize);

    for (size_t i = 0; i < arrSize; ++i) {
        arr[i] = generateByteArray(byteArrayLength);
    }

    // Печать массива до сортировки
    cout << "Массив до сортировки:" << endl;
    for (const auto& byteArray : arr) {
        printByteArray(byteArray);
    }

    // Сортировка массива лексикографически
    sort(arr.begin(), arr.end());

    // Печать массива после сортировки
    cout << "Массив после сортировки:" << endl;
    for (const auto& byteArray : arr) {
        printByteArray(byteArray);
    }

    return 0;
}