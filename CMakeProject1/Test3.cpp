#include<iostream>

int main() {
    using namespace std;
    setlocale(LC_ALL, "RU");

    while (true) {

        float x, y, z;

        cout << "������� ����� ������: ";
        cin >> x;
        cout << "������� ������ ������: ";
        cin >> y;
        cout << "������� ������ ������: ";
        cin >> z;

        float sizeCube = 5.0f;
        int quantity�ubes = 0;
        int setCubes27 = 0;
        int setCubes8 = 0;

        if (x > 0 && y > 0 && z > 0) {
            //�������� �� ������������ �����
            if (x < sizeCube || y < sizeCube || z < sizeCube) {
                cout << "���� �� ��������.\n";
            }
            else {
                quantity�ubes = (int)((int)x / sizeCube) * (int)((int)y / sizeCube) * (int)((int)z / sizeCube);
            }
            cout << "����� ����������� " << quantity�ubes << " �������.\n";
            //������� �������
            if (quantity�ubes < 8) {
                cout << "����� �� ���������.\n";
            }
            else if ((quantity�ubes - 27) >= 0) {
                do {
                    quantity�ubes -= 27;
                    setCubes27++;
                } while (quantity�ubes > 27);
                cout << "��������� " << setCubes27 << " ������� �� 27 �������.\n";
            }
            else if ((quantity�ubes - 8) >= 0) {
                do {
                    quantity�ubes -= 8;
                    setCubes8++;
                } while (quantity�ubes > 8);
                cout << "��������� " << setCubes8 << " ������� �� 8 �������.\n";
            }
        }
        else {
            cout << "������������ ��������!\n";
        }
        cout << endl;
    }
}