#include<iostream>
#include<vector>

using namespace std;

bool unCorrectInput(char symbols[][3], int userInputX, int userInputY) {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nUncorrect input!";
		return true;
	}
	if ((userInputX < 0 || userInputX > 2) || (userInputY < 0 || userInputY > 2)) {
		cout << "\nUncorrect input!";
		return true;
	}
	if (symbols[userInputY][userInputX] != false) {
		cout << "\nUncorrect input!";
		return true;
	}
	return false;
}

void displayPrint(char display[][7], char symbols[][3], int userInputX, int userInputY) {

	display[2 + 2 * userInputY][2 + 2 * userInputX] = symbols[userInputY][userInputX];
	for (int i = 0; i < 7; i++) {
		cout << endl;
		for (int j = 0; j < 7; j++) {
			cout << display[i][j];
		}
	}
}

bool endGame(char symbols[][3], char player) {
	for (int i = 0; i < 3; i++) {
		if (symbols[0][i] != false && symbols[0][i] == symbols[1][i] && symbols[1][i] == symbols[2][i]) {
			cout << "\nWin player " << player << "!";
			return true;
		}
		if (symbols[i][0] != false && symbols[i][0] == symbols[i][1] && symbols[i][1] == symbols[i][2]) {
			cout << "\nWin player " << player << "!";
			return true;
		}
		if (symbols[0][0] != false && symbols[0][0] == symbols[1][1] && symbols[1][1] == symbols[2][2]) {
			cout << "\nWin player " << player << "!";
			return true;
		}
		if (symbols[0][2] != false && symbols[0][2] == symbols[1][1] && symbols[1][1] == symbols[2][0]) {
			cout << "\nWin player " << player << "!";
			return true;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (symbols[i][j] == false) {
				return false;
			}
		}
	}
	cout << "\nDraw.";
	return true;
}

int main()
{

	char symbols[3][3] = { {{ false }, { false }, { false }},
						   {{ false }, { false }, { false }},
						   {{ false }, { false }, { false }} };

	char display[7][7] = { {{' '}, {'x'}, {'0'}, {' '}, {'1'}, {' '}, {'2'}},
						   {{'y'}, {' '}, {' '}, {' '}, {' '}, {' '}, {' '}},
						   {{'0'}, {' '}, {' '}, {'|'}, {' '}, {'|'}, {' '}},
						   {{' '}, {' '}, {'='}, {'='}, {'='}, {'='}, {'='}},
						   {{'1'}, {' '}, {' '}, {'|'}, {' '}, {'|'}, {' '}},
						   {{' '}, {' '}, {'='}, {'='}, {'='}, {'='}, {'='}},
						   {{'2'}, {' '}, {' '}, {'|'}, {' '}, {'|'}, {' '}} };

	char player = 'X';

	int userInputX;
	int userInputY;

	for (int i = 0; i < 7; i++) {
		cout << endl;
		for (int j = 0; j < 7; j++) {
			cout << display[i][j];
		}
	}

	for (;;) {

		do {
			cout << "\n\nPlayer " << player;
			cout << ".\nInput X: ";
			cin >> userInputX;
			cout << "Input Y: ";
			cin >> userInputY;
		} while (unCorrectInput(symbols, userInputX, userInputY));

		symbols[userInputY][userInputX] = player;

		displayPrint(display, symbols, userInputX, userInputY);

		if (endGame(symbols, player)) {
			break;
		}

		if (player == 'X') {
			player = 'O';
		}
		else {
			player = 'X';
		}
	}
}