#include<iostream>
using namespace std;

int odd(unsigned int x) {
	return (x % 2);
}

int main() {
	unsigned int sum = 0;

	for (unsigned int i = 1; i <= 100000000; i++) {
		if (odd(i))
			sum += i;
	}
	cout << sum;
}