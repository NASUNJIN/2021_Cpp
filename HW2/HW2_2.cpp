#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "20201529 ������" << endl << endl;
	string text;
	cout << "���ڿ� �Է�>> ";
	getline(cin, text, '\n');
	
	int sum = 0;
	//3-1
	for (int i = 0; i < text.length(); i++) {  //sizeof(text)
		if(text.at(i) == 'a') {
			sum++;
		}
	}

	cout << "���� a�� " << sum << "�� �ֽ��ϴ�." << endl;
	// 3-2
	int index = 0;
	int count = 0;
	while (true) {
		if (text.find('a', index) == -1) break;
		index = text.find('a', index) + 1;
		count++;
	}
	cout << "���� a�� " << sum << "�� �ֽ��ϴ�." << endl;
	
}