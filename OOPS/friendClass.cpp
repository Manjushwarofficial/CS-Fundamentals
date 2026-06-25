#include<iostream>
using namespace std;

class A {
    private:
    int a;

    public:
    A() {
        a = 0;
    }

    A(int num) {
        a = num;
    }

    friend class B; // Declaring class B as a friend of class A
};

class B {
    public:
    void show(A obj) {
        cout << "The value of a is: " << obj.a << endl; // Accessing private member of class A
    }
};

int main () {
    A objA(10);
    B objB;
    objB.show(objA); // Calling the show function of class B
    return 0;
}