#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
    std::cout << " 20201529 ������" << endl <<endl;
    Exp a(3, 2); 
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a�� ���̽� " << a.getBase() << ',' << "���� " << a.getExp() << endl;

    if (a.equals(b)) {
        cout << "same" << endl;
    }
    else {
        cout << "not same" << endl;
    }
}