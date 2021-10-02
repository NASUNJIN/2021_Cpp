#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "20201529 나선진" << endl << endl;

	srand((unsigned)time(0));
	string text;
	int n;
	
	while (true) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit") break;

		while (true) {
			srand((unsigned)time(0));
			n = rand() % (text.length());
			if (text[n] != ' ')break;
		}
		int a = (rand() % 26) + 95;  // 알파벳 26개 95 아스키코드
		text[n] = (char)a;
		cout << text << endl;
	}
}