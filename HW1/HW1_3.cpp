#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int a;
public:
	Integer(int b) {
		a = b;

	}
	Integer(string s) {
		a = stoi(s);
	}
	int get() {
		return a;
	}
	int set(int b) {
		return a = b;
	}
	int isEven() {
		return true;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 cnffur

	Integer m("300");
	cout << m.get() << ' '; //300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}