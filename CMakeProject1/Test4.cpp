#include<iostream>
#include<vector>

using namespace std;


int main()
{

	float vecA[4][4];
	float vecB[4];
	float vecC[4];

	for (int i = 0; i < 4; i++) {
		float num = 0;
		cout << "Enter the " << i + 1 << " element of the vector B: ";
		cin >> vecB[i];
		for (int j = 0; j < 4; j++) {
			cout << "Enter " << j + 1 << " element of " << i + 1 << " row of the vector A: ";
			cin >> vecA[i][j];
			num += vecA[i][j] * vecB[i];
		}
		vecC[i] = num;
	}

	for (int i = 0; i < 4; i++) {
		cout << vecC[i] << " ";
	}
}