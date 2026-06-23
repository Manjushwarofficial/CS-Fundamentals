#include<iostream>
using namespace std;

class number {
    private:
    int a;

    public:
    number() {
        a = 0;
    }

    number(int num) {
        a = num;
    }

    friend void print(number n);
};

void print(number n) {
    cout << "The value of a is: " << n.a << endl;
}

int main() {
    number n1(5);
    print(n1);
    return 0;
}