#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("�ƻ�� ��õ��� 22 �̵��� 518ȣ");
	string copyAddress(address);

	char text[] = { 'L','o','v','e',' ','c','+','+','\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}