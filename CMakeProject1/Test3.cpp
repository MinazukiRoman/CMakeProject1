#include<iostream>
#include<vector>

using namespace std;


int main()
{

	int matrix1[4][4];
	int matrix2[4][4];

	bool correct = true;

	for (int i = 0; i < 4; i++) {
		if (correct) {
			for (int j = 0; j < 4; j++) {
				cout << "Input number for matrix 1: ";
				cin >> matrix1[i][j];
				cout << "Input number for matrix 2: ";
				cin >> matrix2[i][j];
				if (matrix1[i][j] != matrix2[i][j]) {
					cout << "Matrix not!";
					correct = false;
					break;
				}
			}
		}
	}

	if (correct) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i == j) {
					cout << matrix1[i][i];
				}
				else if (3 - i == j) {
					cout << matrix1[i][j];
				}
				else {
					matrix1[i][j] = 0;
					cout << matrix1[i][j];
				}
			}
			cout << endl;
		}
	}
}