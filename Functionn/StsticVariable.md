## Static Variables

- They have **local scope** but **remain in memory throughout the execution** of the program.
- They are created in the **code section**.
- They are **history-sensitive**.

When you create a static variable, you might think of it as a global variable, but it is actually limited inside a scope.  
A static variable is **created only once**, and after that, its value gets changed or updated without reinitialization.  
These are more used in **modular programming** or **procedural programming** styles.  
Static variables are available in **C++** but **not in Java**.

### Example:

```cpp
#include <iostream>
using namespace std;

void fun() {
    static int v = 0;
    int a = 10;
    v++;
    cout << a << " " << v << endl;
}

int main() {
    fun();
    fun();
    fun();
    return 0;
}
