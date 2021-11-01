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
    friend bool operator== (Book b, int a);
    friend bool operator== (Book a, string str);
    friend bool operator== (Book a, Book b);
};

bool operator==(Book b, int a) {
    if (b.price == a)
        return true;
    else
        return false;
}

bool operator==(Book a, string str) {
    if (a.title == str)
        return true;
    else
        return false;
}

bool operator==(Book a, Book b) {
    if (a.price == b.pages && a.title == b.title && a.pages == b.pages)
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