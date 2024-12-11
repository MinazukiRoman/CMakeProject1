#include<iostream>
#include<string>

using namespace std;

int encrypt_caesar(int code, int symbol) {
	code = code > 26 ? code % 26 : code;
	if (char(symbol) >= 'a' && char(symbol) <= 'z') {
		symbol = (symbol + code) > int('z') ? (int('a') - 1) + (code + (symbol - int('z'))) : symbol += code;
		return symbol;
	}
	else if (char(symbol) >= 'A' && char(symbol) <= 'Z') {
		symbol = (symbol + code) > int('Z') ? (int('A') - 1) + (code + (symbol - int('Z'))) : symbol += code;
		return symbol;
	}
	return symbol;
}



int main() {
	string result;
	cout << "Input text: ";
	string text;
	getline(cin, text);

	cout << "Code: ";
	int code;
	cin >> code;

	for (int i = 0; i < text.length(); i++) {
		int symbol = int(text[i]);
		result += char(encrypt_caesar(code, symbol));
	}

	cout << result;
}