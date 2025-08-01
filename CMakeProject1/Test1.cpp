#include<iostream>
#include<vector>

using namespace std;

int main()
{
	cout << "Input size: ";
	int sz = 0;
	cin >> sz;

	vector<int>nums(sz);
	for (int i = 0; i < nums.size(); i++) {
		cout << "Input number: ";
		cin >> nums[i];
	}

	cout << "Input delete number: ";
	int deleteNum = 0;
	cin >> deleteNum;

	bool start = true;
	while (start) {
		int steps = nums.size() - 1;
		start = false;
		for (int i = 0; i < steps; i++) {
			if (nums[i] == deleteNum) {
				swap(nums[i], nums[i + 1]);
				start = true;
			}
		}
		if (start) {
			nums.pop_back();
		}
	}
	if (nums[nums.size() - 1] == deleteNum) {
		nums.pop_back();
	}

	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i];
	}
}
