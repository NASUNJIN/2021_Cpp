#include<iostream>
using namespace std;

class Rectangle {
public:
	unsigned int width, height;  // unsigned : 부호비트를 제외한 친구_정수형 (즉, 양수범위 2배)
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;  // 변수와 함수를 직접적으로 호출을 했기때문에 public
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}