#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    float initialValue, finalValue;
    cout << "������� ��������� ���������: ";
    cin >> initialValue;
    cout << "������� �������� ���������: ";
    cin >> finalValue;

    int counter = 0;

    if (initialValue <= 0 || finalValue < 0) {
        cout << "������������ ��������.";
    }
    else {
        do {
            initialValue -= initialValue / 100 * 8.4f;
            cout << initialValue << endl;
            counter++;
        } while (initialValue > finalValue);
        cout << "������� �������� " << counter << " ���������.";
    }
}