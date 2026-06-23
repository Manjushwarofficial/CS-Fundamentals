#include<iostream>
using namespace std;


class fraction {
    public:
    int num;
    int deno;
    
    fraction(int n, int d) {
        num = n;
        deno = d;
    }

    friend fraction operator+(fraction f1, fraction f2);
    friend fraction operator-(fraction f1);

    // prefix increment operator
    friend fraction operator++(fraction &f1);
    // postfix increment operator
    friend fraction operator++(fraction &f1, int);
};

fraction operator+(fraction f1, fraction f2) {
    return fraction(f1.num * f2.deno + f2.num * f1.deno, f1.deno * f2.deno);
}

fraction operator-(fraction f1) {
    return fraction(-f1.num, f1.deno);
}

fraction operator++(fraction &f1) {
    f1.num += f1.deno;
    return f1;
}

fraction operator++(fraction &f1, int) {
    fraction temp(f1.num, f1.deno);
    f1.num += f1.deno;
    return temp;
}

int main() {
    fraction f1(1, 2);
    fraction f2(1, 3);
    fraction f3 = f1 + f2;
    fraction f4 = -f1;
    cout << "f1 + f2 = " << f3.num << "/" << f3.deno << endl;
    cout << "-f1 = " << f4.num << "/" << f4.deno << endl;

    cout << " " << endl;
    f1 ++;

    
    cout << "f1 before post incrementing = " << (f1++).num << "/" << f1.deno << endl;
    cout << "f1 after post incrementing = " << f1.num << "/" << f1.deno << endl;
    
    return 0;
}