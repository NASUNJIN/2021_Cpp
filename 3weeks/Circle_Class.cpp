#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();  // Circle::getArea��� �Ƚ�ε� �̹� Circle�ȿ� �����ϱ� (class�ȿ�����)
};

double Circle::getArea() { // getArea�� ���� ��Ȯ�ϰ� �˾ƾ��ؼ�(���� �Ҽ�/�������) Circle::�� ����
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;  // Circle ��ü�� ������ Ÿ��ó�� ��밡��
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}