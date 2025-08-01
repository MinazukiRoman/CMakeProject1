#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<float>price{ 1.25, 2.5, 1, 5, 7,5 };
	vector<int>product{ 1, 1, 6, 0, -1, 3, 5, 7 };
	float sum = 0;

	for (int i = 0; i < product.size(); i++) {
		if (product[i] > price.size() - 1 || product[i] < 0) {
			cout << "Product number " << i + 1 << " uncorrect!\n";
		}
		else {
			sum += price[product[i]];
		}
	}
	cout << "Final price: " << sum;
}