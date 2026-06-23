#include <iostream>

using namespace std;

// basic constructors
class class_1 {

    private:
    class_1() {
        cout << "Constructor called" << endl;
    }

    public:
    class_1(char c) {
        cout << "Parameterized constructor called" << endl;
    }

    class_1(const class_1& other) {
        cout << "Copy constructor called" << endl;
    }


    ~class_1() {
        cout << "Destructor called" << endl;
    }

};

// deep copy
class class_2{

    public:
    int n;
    class_2(int n) {
        cout << "Parameterized constructor called" << endl;
        this -> n = n;
    }
    
};

// shallow copy
class class_3{
    public:
    int *n;

    class_3(int n) {
        cout << "Parameterized constructor called" << endl;
        this -> n = new int(n);
    }
};


int main() {

    {// basic constructors
    // cout << "Hello, World!" << endl;
    // class_1 obj1('a'); // This will call the parameterized constructor
    // //class_1 obj2; // This will cause a compilation error because the default constructor is private
    // class_1 obj3(obj1); // This will call the copy constructor
    // class_1 obj4 = obj1; // This will also call the copy constructor
    }

    {// deep copy
    // class_2 obj_1(10);
    // cout << obj_1.n << endl;

    // class_2 obj_2(obj_1);
    // cout << obj_2.n << endl;

    // obj_2.n = 20;
    // obj_1.n = 30;
    // cout << obj_1.n << endl;
    // cout << obj_2.n << endl;
    }

    {// shallow copy
    class_3 obj_1(10);
    class_3 obj_2(obj_1);
    //obj_2.n = new int(20);

    cout << *(obj_1.n) << endl;
    cout << *(obj_2.n) << endl;
    }


    return 0;
}