#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ru");
    using namespace std;

    while (true) {

        float orcHealth, fireballDamage, magicResist;
        cout << "�������� ����: ";
        cin >> orcHealth;
        cout << "���������������� �����: ";
        cin >> magicResist;

        if (magicResist > 1 || magicResist < 0 || orcHealth <= 0 || orcHealth > 1) {
            cout << "������������ ��������!\n";
        }
        else if (magicResist == 1) {
            cout << "���� ��� ������� ���� ��� ����, ����� �������.\n\n��������, ������������ ��� ����! \n\n";
        }
        else {
            do {
                cout << "���� ��������� ����: ";
                cin >> fireballDamage;
                if (fireballDamage < 0 || fireballDamage > 1) {
                    cout << "������������ ��������!";
                }
                else {
                    orcHealth -= fireballDamage - (fireballDamage / 100 * (magicResist * 100));
                    cout << orcHealth << endl;
                }
            } while (orcHealth > 0);
            cout << "��� ����!\n\n��������, ������������ ��� ����! \n\n";
        }
    }
}