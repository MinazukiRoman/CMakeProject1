#include<iostream>
#include<vector>

using namespace std;


int main()
{
	int chairs[2][6] = { {1,1,1,1,1,1},
						 {1,1,1,1,1,1} };

	int plates[2][6] = { {3, 2, 2, 2, 2, 2},
						 {3, 2, 2, 2, 2, 2} };

	int forks[2][6] = { {1,1,1,1,1,1},
						 {1,1,1,1,1,1} };

	int spoons[2][6] = { {1,1,1,1,1,1},
						 {1,1,1,1,1,1} };

	int knives[2][6] = { {1,1,1,1,1,1},
						 {1,1,1,1,1,1} };

	int dessertSpoons[2][6] = { {1,0,0,0,0,0},
						 {1,0,0,0,0,0} };

	chairs[0][4] += 1; //стул для ребенка 1 ряд 5 место
	spoons[1][2] -= 1; //украдена ложка 2 ряд 3 место
	dessertSpoons[0][0] -= 1; // (VIP персона делится
	spoons[1][2] += 1;//  ложкой с тем у кого украли )
	plates[0][0] -= 1;// у VIP персоны забрали тарелку для десерта

	cout << "Cheirs: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << chairs[i][j];
		}

	}
	cout << "\n\n" << "Plates: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << plates[i][j];
		}

	}
	cout << "\n\n" << "Forks: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << forks[i][j];
		}

	}
	cout << "\n\n" << "spoons: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << spoons[i][j];
		}

	}
	cout << "\n\n" << "Knives: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << knives[i][j];
		}

	}
	cout << "\n\n" << "Dessert spoons: ";
	for (int i = 0; i < 2; i++) {
		cout << endl;
		for (int j = 0; j < 6; j++) {
			cout << dessertSpoons[i][j];
		}

	}
}
