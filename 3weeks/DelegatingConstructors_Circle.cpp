#include <iostream>
using namespace std;

class Circle {
public:
	Circle(); 
	Circle(int r); 
	int radius;
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;  // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // �Ű� ���� �մ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}