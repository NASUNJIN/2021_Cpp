#include <iostream>
using namespace std;

class Power {
	double kick;
	double punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+(int b);
	Power operator+(double b);
};

Power Power::operator+(int b) {
	Power tmp;
	tmp.kick = this->kick + b;
	tmp.punch = this->punch + b;
	return tmp;
}

Power Power::operator+(double b) {
	Power tmp;
	tmp.kick = this->kick + b;
	tmp.punch = this->punch + b;
	return tmp;
}

// ���ø� ���̺귯�� > �������α׷�����!
// ���� operator+(int b)�� double�� �ѹ��� ¥�ν��Ѽ��Ҽ�����!

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2.1;
	a.show();
	b.show();
}