#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
public:
	void setCircle(string name, int radius); // �̸��� ������ ����
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
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ�
	~CircleManager();
	void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸��� ���
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
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
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	string name;
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	int circleArea = 0;
	cin >> circleArea;
	cout << circleArea << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > circleArea) {
			cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea();
			if (i < size - 1) 
				cout << ", ";
		}
	}
}

int main() {
	cout << "20201529 ������" << endl << endl;

	cout << "���� ���� >> ";
	int circleNum = 0;
	cin >> circleNum;
	CircleManager C(circleNum);
	C.searchByName();
	C.searchByArea();
	return 0;
}