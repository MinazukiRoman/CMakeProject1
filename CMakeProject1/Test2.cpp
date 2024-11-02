#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ru");
    using namespace std;

    while (true) {

        float orcHealth, fireballDamage, magicResist;
        cout << "Здоровье орка: ";
        cin >> orcHealth;
        cout << "Сопротивляемость магии: ";
        cin >> magicResist;

        if (magicResist > 1 || magicResist < 0 || orcHealth <= 0 || orcHealth > 1) {
            cout << "Некорректное значение!\n";
        }
        else if (magicResist == 1) {
            cout << "Этот орк слишком силён для мага, стоит убежать.\n\nБерегись, приближается ещё один! \n\n";
        }
        else {
            do {
                cout << "Урон огненного шара: ";
                cin >> fireballDamage;
                if (fireballDamage < 0 || fireballDamage > 1) {
                    cout << "Некорректное значение!";
                }
                else {
                    orcHealth -= fireballDamage - (fireballDamage / 100 * (magicResist * 100));
                    cout << orcHealth << endl;
                }
            } while (orcHealth > 0);
            cout << "Орк убит!\n\nБерегись, приближается ещё один! \n\n";
        }
    }
}