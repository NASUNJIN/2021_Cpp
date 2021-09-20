#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int nextEven();
	int nextOdd();
	int nextEvenInRange(int x, int y);
	int nextOddInRange(int x, int y);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� ���������� �߻���Ű�� ���� seed ����
}

int SelectableRandom::nextEven() {
	int n;
	do {
		n = rand();
	} while (n % 2 != 0);
	return n;
}

int SelectableRandom::nextOdd() {
	int n;
	do {
		n = rand();
	} while (n % 2 != 1);
	return n;
}

int SelectableRandom::nextEvenInRange(int x, int y) {
	// rand()%b; 0~(b-1) 
	// rand()%b+1; 1~b 
	// rand()%b+a; a~(b-1+a)
	// rand()%(b+1-a)+a; a~b
	int n;
	do {
		n = (rand() % (y + 1 - x)) + x;
	} while (n % 2 != 0);
	return n;
}

int SelectableRandom::nextOddInRange(int x, int y) {
	int n;
	do {
		n = (rand() % (y + 1 - x)) + x;
	} while (n % 2 != 1);
	return n;
}

int main() {
	SelectableRandom r;
	cout << "20201529 ������" << endl << endl;

	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();  // 0����  RAND_MAX(32767) ������ ������ ¦�� ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9������ Ȧ�� ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9); // 2���� 9������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}