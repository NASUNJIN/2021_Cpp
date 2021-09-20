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
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤변수를 발생시키기 위한 seed 설정
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
	cout << "20201529 나선진" << endl << endl;

	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();  // 0에서  RAND_MAX(32767) 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9까지의 홀수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9); // 2에서 9사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}