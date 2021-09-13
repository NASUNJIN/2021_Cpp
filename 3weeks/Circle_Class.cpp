#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();  // Circle::getArea라고 안써두됨 이미 Circle안에 있으니까 (class안에있음)
};

double Circle::getArea() { // getArea가 뭔지 정확하게 알아야해서(누구 소속/멤버인지) Circle::를 붙임
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;  // Circle 자체가 데이터 타입처럼 사용가능
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}