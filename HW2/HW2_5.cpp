#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Person::Person() {};

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
};

int main() {
	cout << "20201529 ������" << endl << endl;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	Person p[3];
	string n, t;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
	{
		cout << p[i].getName() << " ";
	}
	cout << endl;
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>> ";
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		if (p[i].getName() == n)
		{
			cout << "��ȭ ��ȣ�� " << p[i].getTel();
			break;
		}
	}
}