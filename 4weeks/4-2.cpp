#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
//	Circle() { radius = 1; }  >> 이것만 없으면 에러
//	Circle(int r) { radius = r; } >> 두개 다 없으면 돌아감
	void set(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circleArray[3];
	circleArray[0].set(10);
	circleArray[1].set(20);
	circleArray[2].set(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
	return 0;
}