#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return a = b;
}
int big(int a[], int size) {
	int bignum = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > bignum)
			bignum = a[i];
	}
	return bignum;
}

int main() {
	int arrary[5] = { 1, 9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(arrary, 5) << endl;
}