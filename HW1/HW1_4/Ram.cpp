#include <iostream>
#include <string>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	mem[100 * 1024] = { 0, }; // mem�迭�� ���� 0���� �ʱ�ȭ
	size = 100 * 1024;
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int adress, char value) {
	mem[adress] = value;
}