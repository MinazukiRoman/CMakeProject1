#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    int kilometers;
    cout << "Сколько километров ты сегодня пробежал: ";
    cin >> kilometers;
    float tempAllKilometers = 0;

    for (int i = 1; i < kilometers + 1; i++) {
        float temp;
        cout << "Какой темп на " << i << " километре: ";
        cin >> temp;
        tempAllKilometers += temp;
    }

    int minutes = (tempAllKilometers / kilometers) / 60;
    int second = ((tempAllKilometers / kilometers) / 60 - minutes) * 60;
    cout << "Твой темп на всей дистанции " << minutes << " минут " << second << " секунд.";

}