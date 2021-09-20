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
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤변수를 발생시키기 위한 seed 설정
}

int Random::next() {
	return rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
}

int Random::nextInRange(int x, int y) {
	int n = (rand() % (y + 1 - x)) + x;  // 0+a ~ (b-1+a+1-a)
	// rand()%b; 0~(b-1), rand()%b+1; 1~b, rand()%b+a; a~(b-1+a) 
	return n;
}

int main() {
	Random r;
	cout << "20201529 나선진" << endl << endl;

	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();  // 0에서  RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;
}