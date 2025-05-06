#include <iostream>
using namespace std;
int main() {
	int n,sum=0,i=0,x;
	int *nums;
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
		cout << "Vuvedete element"<<i<<":";
		cin >> nums[i];
		i++;
	}
	cout << "Vuvedete chisloto X ";
	cin >> x;
	
	for (i = 0; i < n; i++) {
		if (nums[i]==x) {
			sum++;
		}
	}
	cout << "Chisloto X se sreshta " << sum<<" puti";
}