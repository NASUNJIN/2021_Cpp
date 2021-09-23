#include<iostream>
using namespace std;

int main() {
	int* p;

	p = new int;  // 동적할당
	// 실제로 할당이 됐는가 확인
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << '\n';

	delete p;  //delete 안해도 에러안남 >> 실행엔 문제 없음 그치만 눈에 보이지 않는 에러임
	// new가 있으면 쌍으로 delete 있어야함
}