#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) { // 배열 data 에서 n 개의 원소를 합한 결과를 리턴
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // sum와 타입과 리턴 타입이 모두 T 로 선언되어 있음
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << add(x, 5) << endl; // 배열 x 와 원소 5 개의 합을 계산
	cout << "sum of d[] = " << add(d, 6) << endl; // 배열 d 와 원소 6 개의 합을 계산
}