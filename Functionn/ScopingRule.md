# C++ Block Level Scope

C++ supports **block-level scope**.

```cpp
#include<iostream>
using namespace std;

int x = 10;

int main() {
    int x = 1;
    {
        int x = 5;
        cout << x << endl;  // Prints 5 (innermost block variable)
    }
    cout << x << endl;      // Prints 1 (main block variable)
    cout << ::x;            // Prints 10 (global variable)
}
In this code:

x = 5 is declared inside an inner block and will be printed first.

x = 1 is declared inside main() and will be printed next.

x = 10 is the global variable, and to access it, you use the ::x syntax.

Important Point
If you want to access the global variable inside any block where a local x is also defined, you must use ::x.