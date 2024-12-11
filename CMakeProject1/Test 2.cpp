#include<iostream>
#include<string>

using namespace std;

bool leftPart(int middle, string userEmail) {
	int counter = 0;
	for (int i = 0; i < middle; i++) {
		if (!(userEmail[i] == '!' || userEmail[i] == '?')
			&& !(userEmail[i] >= '#' && userEmail[i] <= char(39))
			&& !(userEmail[i] >= '*' && userEmail[i] <= '+')
			&& !(userEmail[i] >= '-' && userEmail[i] <= '9')
			&& !(userEmail[i] >= '^' && userEmail[i] <= '~')) {
			return false;
		}
		counter++;
	}
	if (counter < 1 || counter > 64) {
		return false;
	}
}

bool rightPart(int middle, string userEmail) {

}

int main() {
	string userEmail;
	cout << "Input email: ";
	getline(cin, userEmail);
	int middle;

	for (int i = 0; i < userEmail.length(); i++) {
		if (userEmail[i] == '@') {
			middle = i;
			break;
		}
	}
	if (leftPart(middle, userEmail) && rightPart(middle, userEmail)) {
		cout << "ok";
	}

}