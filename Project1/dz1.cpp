//1
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string arr[100]; // Массив размером 100
//    int occupied = 0; // Количество занятых элементов
//
//    std::cout << "Введите строки (введите 'exit' для завершения ввода):" << std::endl;
//
//    for (int i = 0; i < 100; ++i) {
//        std::getline(std::cin, arr[i]);
//        if (arr[i] == "exit") {
//            break;
//        }
//        occupied++;
//    }
//
//    int free = 100 - occupied; // Количество свободных элементов
//
//    std::cout << "Занято элементов: " << occupied << std::endl;
//    std::cout << "Свободно элементов: " << free << std::endl;
//
//    return 0;
//}

//2
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string input;
//    std::cout << "Введите строку: ";
//    std::getline(std::cin, input);
//
//    int M, N;
//    std::cout << "Введите индекс M: ";
//    std::cin >> M;
//    std::cout << "Введите индекс N: ";
//    std::cin >> N;
//
//    if (M < 0 || N >= input.length() || M > N) {
//        std::cout << "Неверные индексы." << std::endl;
//        return 1;
//    }
//
//    std::string segment = input.substr(M, N - M + 1);
//    std::cout << "Символы с индексами от " << M << " до " << N << ": " << segment << std::endl;
//
//    return 0;
//}
//
//


//3
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string input;
//    std::cout << "Введите строку: ";
//    std::getline(std::cin, input);
//
//    int M, N;
//    std::cout << "Введите индекс M: ";
//    std::cin >> M;
//    std::cout << "Введите индекс N: ";
//    std::cin >> N;
//
//    if (M < 0 || N >= input.length() || M > N) {
//        std::cout << "Неверные индексы." << std::endl;
//        return 1;
//    }
//
//    input.erase(M, N - M + 1);
//    std::cout << "Полученная строка: " << input << std::endl;
//
//    return 0;
//}



/*
* //4
#include <iostream>
#include <string>

int main() {
    std::string input;
    char symbol;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    size_t lastIndex = input.find_last_of(symbol);
    if (lastIndex != std::string::npos) {
        std::cout << "Индекс последнего совпадения: " << lastIndex << std::endl;
    }
    else {
        std::cout << "Символ не найден." << std::endl;
    }

    return 0;
}

//5
#include <iostream>
#include <string>

int main() {
    std::string input;
    char symbol;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    std::cout << "Введите символ: ";
    std::cin >> symbol;

    std::cout << "Индексы всех совпадений: ";
    bool found = false;
    for (size_t i = 0; i < input.length(); ++i) {
        if (input[i] == symbol) {
            std::cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Символ не найден." << std::endl;
    } else {
        std::cout << std::endl;
    }

    return 0;
}


*/