#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    float sizeFileMb, downloadSpeed;
    cout << "������� ������ ����� � ����������: ";
    cin >> sizeFileMb;
    cout << "������� �������� ����������: ";
    cin >> downloadSpeed;

    float downloadFiles = 0;
    int seconds = 0;

    if (sizeFileMb > 0 && downloadSpeed > 0) {
        do {
            seconds++;
            downloadFiles += downloadSpeed;

            float check = sizeFileMb - downloadFiles;
            if (check < 0) {
                downloadFiles -= downloadSpeed;
                downloadSpeed += check;
                downloadFiles += downloadSpeed;
            }

            cout << "\n������ ������� " << seconds << " ������, ������� " << downloadFiles << " �� " << sizeFileMb << ".(" << (int)(downloadFiles / (sizeFileMb / 100)) << "%)";
        } while (downloadFiles != sizeFileMb);
        cout << "\n�������� ��������� �� " << seconds << " ������.";
    }
    else {
        cout << "������������ ��������!";
    }
}