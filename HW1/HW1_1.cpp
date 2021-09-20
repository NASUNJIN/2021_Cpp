#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int x, int y);
};

Random::Random() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� ���������� �߻���Ű�� ���� seed ����
}

int Random::next() {
	return rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
}

int Random::nextInRange(int x, int y) {
	int n = (rand() % (y + 1 - x)) + x;  // 0+a ~ (b-1+a+1-a)
	// rand()%b; 0~(b-1), rand()%b+1; 1~b, rand()%b+a; a~(b-1+a) 
	return n;
}

int main() {
	Random r;
	cout << "20201529 ������" << endl << endl;

	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();  // 0����  RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}