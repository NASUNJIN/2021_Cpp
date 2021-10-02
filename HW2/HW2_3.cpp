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
	void read();  // ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
	void write(); // �����迭�� ȭ�鿡 ���
	int big();  // �����迭���� ���� ū �� ����
	~Sample();  // �Ҹ���
};

void Sample::read() {
	cout << "���� 10���� �Է��ϼ���." << endl;
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
	cout << "20201529 ������" << endl << endl;

	Sample s(10);  // 10�� ���� �迭�� ���� Sample ��ü ����
	s.read();  // Ű���忡�� ���� �迭 �б�
	s.write();  // ���� �迭 ���
	cout << "���� ū ���� " << s.big() << endl; // ���� ū �� ���
}