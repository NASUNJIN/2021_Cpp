#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("아산시 순천향로 22 미디어랩스 518호");
	string copyAddress(address);

	char text[] = { 'L','o','v','e',' ','c','+','+','\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}