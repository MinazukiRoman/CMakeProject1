#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    int kilometers;
    cout << "������� ���������� �� ������� ��������: ";
    cin >> kilometers;
    float tempAllKilometers = 0;

    for (int i = 1; i < kilometers + 1; i++) {
        float temp;
        cout << "����� ���� �� " << i << " ���������: ";
        cin >> temp;
        tempAllKilometers += temp;
    }

    int minutes = (tempAllKilometers / kilometers) / 60;
    int second = ((tempAllKilometers / kilometers) / 60 - minutes) * 60;
    cout << "���� ���� �� ���� ��������� " << minutes << " ����� " << second << " ������.";

}