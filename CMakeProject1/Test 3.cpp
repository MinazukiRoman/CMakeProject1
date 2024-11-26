#include<iostream>
#include<string>

int main() {
    using namespace std;

    cout << "Input: ";
    string str;
    getline(cin, str);

    int word = 0;

    for (int i = 0; i < str.length(); i++) {
        int letter = 0;
        if (str[i] != ' ') {
            word++;
            for (int a = 0; str[i + a] != ' ' && (i + a) < str.length(); a++) {
                letter++;
            }
        }
        i += letter;
    }
    cout << "Found words: " << word;
}