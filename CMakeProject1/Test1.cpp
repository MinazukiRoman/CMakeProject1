#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ru");
    using namespace std;

    while (true) {
        float f, m, t;
        cout << "����: ";
        cin >> f;
        cout << "����� (��): ";
        cin >> m;
        cout << "����� (���): ";
        cin >> t;

        if (f <= 0 || m <= 0 || t <= 0) {
            cout << "\n������������ ����!\n\n";
        }
        else {
            float result = ((float)f / (float)m * pow((float)t, 2)) / 2;

            cout << "����� " << t << " ������, ������� �������� �� ���������� " << result << " ������.";
            break;
        }
    }
}