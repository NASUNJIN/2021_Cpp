#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, heigth;
public:
	Rect(int width, int heigth) {
		this->width = width;
		this->heigth = heigth;
	}
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.heigth == s.heigth) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.heigth = src.heigth;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a);
	if (man.equals(b, a)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}