#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "20201529 ������" << endl << endl;

	srand((unsigned)time(0));
	string text;
	int n;
	
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit") break;

		while (true) {
			srand((unsigned)time(0));
			n = rand() % (text.length());
			if (text[n] != ' ')break;
		}
		int a = (rand() % 26) + 95;  // ���ĺ� 26�� 95 �ƽ�Ű�ڵ�
		text[n] = (char)a;
		cout << text << endl;
	}
}