#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5; 
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int main() {
	// PrivateAccessError objA;  >> private�� main���� ȣ�� ����.
	PrivateAccessError objB(100);
	// objB.a = 10;  >> private����� main���� ���� ����.
	objB.b = 10;
	// objB.f();  >> private����� main�ּ� ���� ����.
	objB.g();
}