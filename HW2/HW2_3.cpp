#include <iostream>
#include <string>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();  // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음
	void write(); // 정수배열을 화면에 출력
	int big();  // 정수배열에서 가장 큰 수 리턴
	~Sample();  // 소멸자
};

void Sample::read() {
	cout << "정수 10개를 입력하세요." << endl;
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int Sample::big() {
	int max = p[0];
	for (int i = 1; i < size; i++) {
		if (max < p[i])
			max = p[i];
	}
	return max;

	/*int max = *p;
	for (int i = 1; i < size; i++) {
		if (max < *(p+i)) {
			max = *(p+i);
		}
	}
	return max;*/
}

Sample::~Sample() {
	delete[] p;
}


int main() {
	cout << "20201529 나선진" << endl << endl;

	Sample s(10);  // 10개 정수 배열을 가진 Sample 객체 생성
	s.read();  // 키보드에서 정수 배열 읽기
	s.write();  // 정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력
}