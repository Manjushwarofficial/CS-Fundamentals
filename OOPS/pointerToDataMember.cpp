#include<iostream>
using namespace std;

// pointer to data memeber and pointer to member function

class MyClass {
    public:
    int a;

    MyClass(int val) : a(val) {}

    void display() {
        cout << "Value of a: " << a << endl;
    }

    int getA() {
        return a;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj(10);

    // Pointer to data member
    int MyClass::*ptrToDataMember = &MyClass::a;
    cout << "Value of a using pointer to data member: " << obj.*ptrToDataMember << endl;

    // Pointer to member function
    void (MyClass::*ptrToMemberFunction)() = &MyClass::display;
    (obj.*ptrToMemberFunction)();

    return 0;
}