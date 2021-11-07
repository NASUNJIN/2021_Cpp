#include <iostream>
#include <string>

using namespace std;

class Stack {
	int last;
	int stack[100000];
public:
	Stack(int last = 0) {
		this->last = last;
	}

	bool operator!();

	Stack& operator<<(int a);
	int operator>>(int& a);
};

bool Stack::operator!() {
	if (this->last == 0) return true;
	else return false;
}

Stack& Stack::operator<<(int a) {
	this->stack[this->last] = a;
	this->last = this->last + 1;
	return *this;
}

int Stack::operator>>(int& a) {
	a = this->stack[this->last - 1];
	this->stack[this->last - 1] = 0;
	this->last = this->last - 1;
	return a;
}

int main() {
	cout << "20201529 ³ª¼±Áø" << endl << endl;

	Stack stack;

	stack << 3 << 5 << 10;

	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}