#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// ������� ��� ��������� ���������� ��������� ������� �������� �����
vector<uint8_t> generateByteArray(size_t length) {
    vector<uint8_t> byteArray(length);
    for (size_t i = 0; i < length; ++i) {
        byteArray[i] = rand() % 256; // ��������� ���������� �����
    }
    return byteArray;
}

// ������� ��� ������ ��������� ������� � ����������������� �������
void printByteArray(const vector<uint8_t>& byteArray) {
    for (uint8_t byte : byteArray) {
        cout << hex << setw(2) << setfill('0') << (int)byte << " "; // ������ � ����������������� �������
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // ������������� ���������� ��������� �����

    size_t arrSize, byteArrayLength;

    // ���� ��������
    cout << "������� ������ ������� (arr): ";
    cin >> arrSize;
    cout << "������� ����������� ����� ��: ";
    cin >> byteArrayLength;

    // �������� ������� �������� ��������
    vector<vector<uint8_t>> arr(arrSize);

    for (size_t i = 0; i < arrSize; ++i) {
        arr[i] = generateByteArray(byteArrayLength);
    }

    // ������ ������� �� ����������
    cout << "������ �� ����������:" << endl;
    for (const auto& byteArray : arr) {
        printByteArray(byteArray);
    }

    // ���������� ������� �����������������
    sort(arr.begin(), arr.end());

    // ������ ������� ����� ����������
    cout << "������ ����� ����������:" << endl;
    for (const auto& byteArray : arr) {
        printByteArray(byteArray);
    }

    return 0;
}