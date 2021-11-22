#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	//Circle() { this->radius = 1; }
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T1, class T2>
void myswap(T1& a, T2& b) {
	T1 tmp;
	tmp = a;
	a = (T1)b; // datatype이 달라서 형변환
	b = (T2)tmp; // datatype이 달라서 형변환
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c = 1.1, d = 2.3;
	myswap(c, a);
	cout << "c=" << c << ", " << "a=" << a << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut's radius= " << donut.getRadius() << endl;
	cout << "pizza's radius= " << pizza.getRadius() << endl;
}