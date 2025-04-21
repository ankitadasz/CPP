## Function Templates in C++

- Function templates are used to define **generic functions**.
- They work for **multiple data types**.
- The **data type is decided automatically** based on the type of the value passed.
- The **data type is a template variable**.
- A function can have **multiple template variables**.

### ✅ Example of a Function Template

```cpp
#include <iostream>
using namespace std;

template<class T>
T maxim(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << maxim(12, 14) << endl;
    cout << maxim(2.3, 1.4) << endl;
    cout << maxim(2.3f, 5.6f) << endl;
    return 0;
}
