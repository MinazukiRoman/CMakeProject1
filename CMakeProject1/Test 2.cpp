#include<iostream>
#include<string>

using namespace std;

bool leftPart(string firstHalf) {
	string correctSymbol = "abcdefghijklmnopqrstuvwxyz0123456789!#$%&'*+-/=?^_`{|}~.";
	if (firstHalf.length() < 1 || firstHalf.length() > 64) {
		return false;
	}
	for (int i = 0; i < firstHalf.length(); i++) {
		if ((firstHalf[0] == '.') || (firstHalf[i] == '.' && (firstHalf[i + 1] == firstHalf[i]))) {
			return false;
		}
		bool find = false;
		for (int j = 0; j < correctSymbol.length(); j++) {
			if (firstHalf[i] == correctSymbol[j]) {
				find = true;
				break;
			}
		}
		if (find == false) {
			return false;
			break;
		}
	}
	return true;
}

bool rightPart(string secondHalf) {
	string correctSymbol = "abcdefghijklmnopqrstuvwxyz0123456789-.";
	if (secondHalf.length() < 1 || secondHalf.length() > 63) {
		return false;
	}
	for (int i = 0; i < secondHalf.length(); i++) {
		if (secondHalf[secondHalf.length() - 1] == '.' || (secondHalf[i] == '.' && (secondHalf[i + 1] == secondHalf[i]))) {
			return false;
		}
		bool find = false;
		for (int j = 0; j < correctSymbol.length(); j++) {
			if (secondHalf[i] == correctSymbol[j]) {
				find = true;
				break;
			}
		}
		if (find == false) {
			return false;
			break;
		}
	}
	return true;
}

int main() {

	string firstHalf;
	string secondHalf;
	bool find = false;

	string userEmail;
	cout << "Input email: ";
	getline(cin, userEmail);

	for (int i = 0; i < userEmail.length(); i++) {
		if (userEmail[i] == '@') {
			find = true;
			i++;
		}
		if (find) {
			secondHalf += userEmail[i];
		}
		else {
			firstHalf += userEmail[i];
		}
	}

	cout << string((leftPart(firstHalf) && rightPart(secondHalf)) ? "Yes" : "No");
}