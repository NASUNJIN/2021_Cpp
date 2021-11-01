#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "�� " << pages << " ������" << endl;
    }
    string getTitle() { return title; }
    bool operator== (int a);
    bool operator== (string str);
    bool operator== (Book b);
};

bool Book::operator==(int a) {
    if (price == a)
        return true;
    else
        return false;
}

bool Book::operator==(string a) {
    if (title == a)
        return true;
    else
        return false;
}

bool Book::operator==(Book b) {
    if (price == b.pages && title == b.title && pages == b.pages)
        return true;
    else
        return false;
}

int main() {
    cout << "20201529 ������" << endl << endl;
    Book a("��ǰ C++", 30000, 300), b("��ǰ C++", 30000, 500);
    if (a == 30000) cout << "���� 30000��" << endl;
    if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
    if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}