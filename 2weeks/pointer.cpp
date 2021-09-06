#include <iostream>
using namespace std;
int main() {
	int n = 10, m;
	char c = 'A';
	double d;

	int *p = &n; // p 는 n 의 주소값을 가짐
	char *q = &c; // q 는 c 의 주소값을 가짐
	double *r = &d; // r 은 d 의 주소값을 가짐

	*p = 25; // n 에 25 가 저장됨
	*q = 'A'; // c 에 문자 A 가 저장됨
	*r = 3.14; // d 에 3.14 가 저장됨
	m = *p + 10; // p가 가리키는 값(n 변수값) + 10 을 m 에 저장
		
	cout << n << ' ' << *p << "\n"; // 둘 다 25 가 출력됨
	cout << c << ' ' << *q << "\n"; // 둘 다 A 가 출력됨
	cout << d << ' ' << *r << "\n"; // 둘 다 3.14 가 출력됨
	cout << m << "\n"; // m 값 35 출력
}