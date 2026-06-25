#include<iostream>
using namespace std;

// auto, extern, register, static, mutable, thread_local, volatile, const, constexpr, typedef, using
constexpr int square(int n) { return n * n; } // Evaluated at compile time


int main() {
    // auto
    auto x = 5; // x is of type int
    cout << "Auto: " << x << endl;

    // extern
    extern int y; // Declaration of an external variable
    cout << "Extern: " << y << endl;

    // register
    register int z = 10; // Suggests to store z in a CPU register
    cout << "Register: " << z << endl;

    // static
    static int count = 0; // Static variable retains its value between function calls
    count++;
    cout << "Static: " << count << endl;

    // mutable
    class MyClass {
        mutable int a;
        public:
        MyClass(int val) : a(val) {}
        void modify() const {
            a++;
        }
        int getA() const {
            return a;
        }
    };
    
    MyClass obj(5);
    obj.modify();
    cout << "Mutable: " << obj.getA() << endl;

    // thread_local
    thread_local int threadVar = 0; // Each thread has its own instance of threadVar
    threadVar++;
    cout << "Thread Local: " << threadVar << endl;

    // volatile
    volatile int v = 10; // Tells the compiler that v can be changed at any time
    cout << "Volatile: " << v << endl;

    // const
    const int c = 20; // c cannot be modified after initialization
    cout << "Const: " << c << endl;

    // constexpr
    cout << "Constexpr: " << square(4) << endl;

    // typedef and using
    typedef unsigned int uint;
    using uint2 = unsigned int;
    
    uint a1 = 100;
    uint2 a2 = 200;
    
    cout << "Typedef: " << a1 << ", Using: " << a2 << endl;

    return 0;

}