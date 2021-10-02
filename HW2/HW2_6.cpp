#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
	string name; // 원의 이름
public:
	void setCircle(string name, int radius); // 이름과 반지름 설정
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	CircleManager(int size); // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
	~CircleManager();
	void searchByName(); // 사용자로부터 원의 이름을 입력받아 먼저 출력
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름을 출력
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name = "";
		int radius = 0;
		cin >> name >> radius;
		(p + i)->setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	cout << "검색하고자 하는 원의 이름 >> ";
	string name;
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {
	cout << "최소 면적을 정수로 입력하세요 >> ";
	int circleArea = 0;
	cin >> circleArea;
	cout << circleArea << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > circleArea) {
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea();
			if (i < size - 1) 
				cout << ", ";
		}
	}
}

int main() {
	cout << "20201529 나선진" << endl << endl;

	cout << "원의 개수 >> ";
	int circleNum = 0;
	cin >> circleNum;
	CircleManager C(circleNum);
	C.searchByName();
	C.searchByArea();
	return 0;
}