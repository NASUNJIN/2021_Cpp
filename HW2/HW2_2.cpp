#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "20201529 나선진" << endl << endl;
	string text;
	cout << "문자열 입력>> ";
	getline(cin, text, '\n');
	
	int sum = 0;
	//3-1
	for (int i = 0; i < text.length(); i++) {  //sizeof(text)
		if(text.at(i) == 'a') {
			sum++;
		}
	}

	cout << "문자 a는 " << sum << "개 있습니다." << endl;
	// 3-2
	int index = 0;
	int count = 0;
	while (true) {
		if (text.find('a', index) == -1) break;
		index = text.find('a', index) + 1;
		count++;
	}
	cout << "문자 a는 " << sum << "개 있습니다." << endl;
	
}