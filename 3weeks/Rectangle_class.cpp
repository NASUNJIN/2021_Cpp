#include<iostream>
using namespace std;

class Rectangle {
public:
	unsigned int width, height;  // unsigned : ��ȣ��Ʈ�� ������ ģ��_������ (��, ������� 2��)
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;  // ������ �Լ��� ���������� ȣ���� �߱⶧���� public
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
}