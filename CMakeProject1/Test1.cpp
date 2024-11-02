#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ru");
    using namespace std;

    while (true) {
        float f, m, t;
        cout << "Тяга: ";
        cin >> f;
        cout << "Масса (кг): ";
        cin >> m;
        cout << "Время (сек): ";
        cin >> t;

        if (f <= 0 || m <= 0 || t <= 0) {
            cout << "\nНекорректный ввод!\n\n";
        }
        else {
            float result = ((float)f / (float)m * pow((float)t, 2)) / 2;

            cout << "Через " << t << " секунд, корабль окажется на расстоянии " << result << " метров.";
            break;
        }
    }
}