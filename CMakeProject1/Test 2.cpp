#include<iostream>
#include<math.h>

int main() {
    using namespace std;

    string str;
    cout << "Input a number, the program will determine whether it is real: ";
    cin >> str;
    bool check1 = false;
    bool check2 = true;
    int sign = 0;
    int numCounter = 0;
    bool found = false;

    if (str[0] == '-' || str[0] == '.' || (str[0] >= '0' && str[0] <= '9')) {
        check1 = true;
    }

    if (check1 == true) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '.') {
                sign++;
            }
            if (str[i] >= '0' && str[i] <= '9') {
                numCounter++;
            }
            if (str[i] != '.' && str[i] != '-' && (str[i] < '0' && str[i] > '9')) {
                found = true;
            }
        }
        if (sign != 1) {
            sign += str[0] == '0' ? 1 : 0;
        }
        if (sign != 1 || numCounter < 1) {
            found = true;
        }
        if (found) {
            check2 = false;
        }
    }

    if (check1 && check2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}