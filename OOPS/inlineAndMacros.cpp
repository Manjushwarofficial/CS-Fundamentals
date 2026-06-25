#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

int main() {
    // inline function
    

    int x = 5, y = 10;
    cout << "Sum: " << sum(x, y) << endl;

    // macro
    #define SQUARE(x) ((x) * (x))

    int z = 4;
    cout << "Square: " << SQUARE(z) << endl;

    return 0;
}