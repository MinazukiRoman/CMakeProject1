#include<iostream>
#include<vector>

using namespace std;

bool unCorrectUserInput(int X, int Y) {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nUncorrect input!\n";
		return true;
	}
	if (X < 1 || X > 12 || Y < 1 || Y > 12) {
		cout << "\nUncorrect input!\n";
		return true;
	}
}

bool check(bool bubble[][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (bubble[i][j] == true) {
				return true;
			}
		}
	}
	return false;
}

char display(char visual[][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << visual[i][j];
		}
		cout << endl;
	}
	return 0;
}

int main()
{

	bool bubble[12][12];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			bubble[i][j] = true;
		}
	}

	char visual[12][12];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			visual[i][j] = 'O';
		}
	}

	display(visual);

	do {
		cout << "\nEnter two coordinates to pop the bubbles:\n";

		int userInputStartX;
		int userInputStartY;
		do {
			cout << "Start\nX: ";
			cin >> userInputStartX;
			cout << "Y: ";
			cin >> userInputStartY;

		} while (unCorrectUserInput(userInputStartX, userInputStartY));

		int userInputEndX;
		int userInputEndY;
		do {
			cout << "End\nX: ";
			cin >> userInputEndX;
			cout << "Y: ";
			cin >> userInputEndY;
		} while (unCorrectUserInput(userInputEndX, userInputEndY));

		for (int i = userInputStartY - 1; i < userInputEndY; i++) {
			for (int j = userInputStartX - 1; j < userInputEndX; j++) {
				if (bubble[i][j] == true) {
					cout << "POP!\n";
					bubble[i][j] = false;
					visual[i][j] = 'X';
				}
			}
		}
		display(visual);
	} while (check(bubble));
}