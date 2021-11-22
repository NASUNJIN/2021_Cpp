#include <iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
 
int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << a << ' ' << b << endl;

	double c = 1.1, d = 2.3;
	myswap(c, d);
	cout << c << ' ' << d << endl;

	char e = 'z', f = 'x';
	myswap(e, f);
	cout << e << ' ' << f << endl;
}