//1
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string arr[100]; // ������ �������� 100
//    int occupied = 0; // ���������� ������� ���������
//
//    std::cout << "������� ������ (������� 'exit' ��� ���������� �����):" << std::endl;
//
//    for (int i = 0; i < 100; ++i) {
//        std::getline(std::cin, arr[i]);
//        if (arr[i] == "exit") {
//            break;
//        }
//        occupied++;
//    }
//
//    int free = 100 - occupied; // ���������� ��������� ���������
//
//    std::cout << "������ ���������: " << occupied << std::endl;
//    std::cout << "�������� ���������: " << free << std::endl;
//
//    return 0;
//}

//2
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string input;
//    std::cout << "������� ������: ";
//    std::getline(std::cin, input);
//
//    int M, N;
//    std::cout << "������� ������ M: ";
//    std::cin >> M;
//    std::cout << "������� ������ N: ";
//    std::cin >> N;
//
//    if (M < 0 || N >= input.length() || M > N) {
//        std::cout << "�������� �������." << std::endl;
//        return 1;
//    }
//
//    std::string segment = input.substr(M, N - M + 1);
//    std::cout << "������� � ��������� �� " << M << " �� " << N << ": " << segment << std::endl;
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
//    std::cout << "������� ������: ";
//    std::getline(std::cin, input);
//
//    int M, N;
//    std::cout << "������� ������ M: ";
//    std::cin >> M;
//    std::cout << "������� ������ N: ";
//    std::cin >> N;
//
//    if (M < 0 || N >= input.length() || M > N) {
//        std::cout << "�������� �������." << std::endl;
//        return 1;
//    }
//
//    input.erase(M, N - M + 1);
//    std::cout << "���������� ������: " << input << std::endl;
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

    std::cout << "������� ������: ";
    std::getline(std::cin, input);
    std::cout << "������� ������: ";
    std::cin >> symbol;

    size_t lastIndex = input.find_last_of(symbol);
    if (lastIndex != std::string::npos) {
        std::cout << "������ ���������� ����������: " << lastIndex << std::endl;
    }
    else {
        std::cout << "������ �� ������." << std::endl;
    }

    return 0;
}

//5
#include <iostream>
#include <string>

int main() {
    std::string input;
    char symbol;

    std::cout << "������� ������: ";
    std::getline(std::cin, input);
    std::cout << "������� ������: ";
    std::cin >> symbol;

    std::cout << "������� ���� ����������: ";
    bool found = false;
    for (size_t i = 0; i < input.length(); ++i) {
        if (input[i] == symbol) {
            std::cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "������ �� ������." << std::endl;
    } else {
        std::cout << std::endl;
    }

    return 0;
}


*/