#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    float sizeFileMb, downloadSpeed;
    cout << "Введите размер файла в мегабайтах: ";
    cin >> sizeFileMb;
    cout << "Введите скорость скачивания: ";
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

            cout << "\nПрошло времени " << seconds << " секунд, скачено " << downloadFiles << " из " << sizeFileMb << ".(" << (int)(downloadFiles / (sizeFileMb / 100)) << "%)";
        } while (downloadFiles != sizeFileMb);
        cout << "\nЗагрузка завершена за " << seconds << " секунд.";
    }
    else {
        cout << "Некорректные значения!";
    }
}