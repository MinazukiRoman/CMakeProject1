#include<iostream>
#include<string>

using namespace std;

string get_address_part(string userIPAddress, int address_part) {
    int start = 0;
    for (int i = 0; i != address_part + 1; i++) {
        string octane;
        for (start; userIPAddress[start] != '.' && start < userIPAddress.length(); start++) {
            octane += userIPAddress[start];
        }
        start++;
        if (i == address_part) {
            return octane;
        }
    }
}

bool check_address_part(string userIPAddress) {
    for (int address_part = 0; address_part < 4; address_part++) {
        int octane = 0;
        int m = 100;
        if (get_address_part(userIPAddress, address_part).length() > 1) {
            if (get_address_part(userIPAddress, address_part)[0] == '0') {
                return false;
            }
        }
        for (int i = 0; i < get_address_part(userIPAddress, address_part).length(); i++) {
            if (get_address_part(userIPAddress, address_part).length() > 2) {
                octane += int(get_address_part(userIPAddress, address_part)[i] - '0') * m;
                m /= 10;
            }
            if (get_address_part(userIPAddress, address_part)[i] < '0' || get_address_part(userIPAddress, address_part)[i] > '9') {
                return false;
            }
        }
        if (octane < 0 || octane > 255) {
            return false;
        }
    }
    return true;
}

bool check_address(string userIPAddress) {
    int counter_dot = 0;
    for (int i = 0; i < userIPAddress.length(); i++) {
        counter_dot = (userIPAddress[i] == '.'
            && userIPAddress[i - 1] != '.'
            && userIPAddress[i + 1] != '.')
            ? counter_dot += 1 : counter_dot;
    }
    if (counter_dot == 3) {
        return check_address_part(userIPAddress);
    }
    return false;
}


int main() {
    string userIPAddress;
    cout << "Input IP address: ";
    getline(cin, userIPAddress);

    if (check_address(userIPAddress)) {
        cout << "ok";
    }
    else {
        cout << "no";
    }
}