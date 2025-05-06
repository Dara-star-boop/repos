#include <iostream>
using namespace std;
int main() {
	int n, sum = 0, i = 0;
	int* nums;
	cout << "vuvedete broi elementi: ";
	cin >> n;

	if (n > 0 && n < 100) {
		nums = new int[n];
	}
	else {
		cout << "mahai se!";
		return 0;
	}
	while (i < n) {
		cout << "Vuvedete element" << i << ":";
		cin >> nums[i];
		i++;
	}
	for (i = 0; i < n; i++) {
		if (nums[i] > 0) {
			sum = nums[i] + sum;
		}
	}
	cout << "Sumata e " << sum;
}