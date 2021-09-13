#include <iostream>
using namespace std;

class Circle {
public:
	Circle();  // 매개 변수 없는 생성자                >>>>>>>> 이거 없고
	Circle(int r);  // 매개 변수 있는 생성자         >>>>>>>>>> 이거 있고
	int radius;
	double getArea();
};

Circle::Circle() {                           // >>>>>>>>>이거 아에 없을때 실행 안됨
	// 아무것도 안써도 상관 없음
	radius = 1;
	cout << "반지름 " << radius << " 원 생성"<< endl; 
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() { 
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;  // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 잇는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}