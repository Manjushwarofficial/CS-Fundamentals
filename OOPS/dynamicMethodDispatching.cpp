#include<iostream>
using namespace std;

// dynamic method dispatching

class Base {
    public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
    public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};


int main() {
    Base* ptr; // Pointer to base class
    Derived obj; // Object of derived class

    ptr = &obj; // Assign address of derived object to base pointer

    ptr->display(); // Calls Derived::display() due to dynamic dispatch

    return 0;
}