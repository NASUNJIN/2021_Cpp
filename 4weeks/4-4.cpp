#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; } 
	void set(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circleArray[2][3];
	circleArray[0][0].set(1);
	circleArray[0][1].set(2);
	circleArray[0][2].set(3);
	circleArray[1][1].set(4);
	circleArray[1][1].set(5);
	circleArray[1][2].set(6);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "] 의 면적은 ";
			cout << circleArray[i][j].getArea() << endl;
		}
}