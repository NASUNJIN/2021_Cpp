#include<iostream>
using namespace std;

int main() {
	int* p;

	p = new int;  // �����Ҵ�
	// ������ �Ҵ��� �ƴ°� Ȯ��
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << '\n';

	delete p;  //delete ���ص� �����ȳ� >> ���࿣ ���� ���� ��ġ�� ���� ������ �ʴ� ������
	// new�� ������ ������ delete �־����
}