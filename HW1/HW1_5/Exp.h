class Exp {
    int result;
    int base;
    int exponent;
public:
    Exp() { base = 1; exponent = 1; }
    Exp(int a) { base = a; exponent = 1; }
    Exp(int a, int b) { base = a; exponent = b; }
    int getValue();
    int getBase() { return base; }
    int getExp() { return exponent; }
    bool equals(Exp b);
};

int Exp::getValue() {
    result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

bool Exp::equals(Exp b) {
    if (b.getValue() == result)return true;
    return false;
}