#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
//	Circle() { radius = 1; }  >> �̰͸� ������ ����
//	Circle(int r) { radius = r; } >> �ΰ� �� ������ ���ư�
	void set(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circleArray[3];
	circleArray[0].set(10);
	circleArray[1].set(20);
	circleArray[2].set(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
	}
	return 0;
}