#include <iostream>
using namespace std;

int sum(int a, int b) {
	int res = 0;
	for (int i = a; i <= b; i++) {
		res += i;
	}
	return res;
}

int sum(int a) {
	int res = 0;
	for (int i = 0; i <= a; i++) {
		res += i;
	}
	return res;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}