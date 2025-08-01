#include<iostream>
#include<vector>

using namespace std;

int result(vector<int>nums) {
	int sz = nums.size() - 1;
	bool start = true;
	while (start) {
		start = false;
		for (int i = 0; i < sz; i++) {
			if (nums[i] > nums[i + 1]) {
				swap(nums[i], nums[i + 1]);
				start = true;
			}
		}
	}


	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	return 0;
}

bool unCorrect(int userInput) {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Uncorrect input!\n";
		return true;
	}
	if (userInput >= -1) {
		return false;
	}
	return true;
}

int main()
{
	vector<int>nums(20);
	int userInput;
	int steps = 0;

	while (true) {
		for (int i = 0; i < nums.size(); i++) {
			if (steps == nums.size()) {
				i = 0;
			}

			do {
				cout << "Input number: ";
				cin >> userInput;

			} while (unCorrect(userInput));

			if (userInput == -1) {
				result(nums);
				i--;
				cout << endl;
			}

			else {
				nums[i] = userInput;
				steps++;
			}
		}
	}
}
