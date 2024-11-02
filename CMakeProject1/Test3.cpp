#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    while (true) {

        float x, y, z;

        cout << "Введите длину бруска: ";
        cin >> x;
        cout << "Введите ширину бруска: ";
        cin >> y;
        cout << "Введите высоту бруска: ";
        cin >> z;

        float sizeCube = 5.0f;
        int quantityСubes = 0;
        int setCubes27 = 0;
        int setCubes8 = 0;

        if (x > 0 && y > 0 && z > 0) {
            //Проверка на допустимость бруса
            if (x < sizeCube || y < sizeCube || z < sizeCube) {
                cout << "Брус не подходит.\n";
            }
            else {
                quantityСubes = (int)((int)x / sizeCube) * (int)((int)y / sizeCube) * (int)((int)z / sizeCube);
            }
            cout << "Всего изготовлено " << quantityСubes << " кубиков.\n";
            //Счетчик наборов
            if (quantityСubes < 8) {
                cout << "Набор не получится.\n";
            }
            else if ((quantityСubes - 27) >= 0) {
                do {
                    quantityСubes -= 27;
                    setCubes27++;
                } while (quantityСubes > 27);
                cout << "Получится " << setCubes27 << " наборов по 27 кубиков.\n";
            }
            else if ((quantityСubes - 8) >= 0) {
                do {
                    quantityСubes -= 8;
                    setCubes8++;
                } while (quantityСubes > 8);
                cout << "Получится " << setCubes8 << " наборов по 8 кубиков.\n";
            }
        }
        else {
            cout << "Некорректные значения!\n";
        }
        cout << endl;
    }
}