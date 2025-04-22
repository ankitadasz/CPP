## Default Arguments in C++

- If you have two overloaded functions—one with two parameters and one with three—you can combine them into a single function using default arguments.
- A default constructor can be made by assigning default values (like 0) to parameters.
- **Rules for Default Arguments**:
  - Default values must be assigned **from right to left**.
  - You **cannot skip** any parameter while assigning defaults.
  - If a parameter has a default value, passing it during the function call is optional.
  - Functions with default arguments can be called with **variable number of arguments**.
  - Useful in **constructors** and **overloaded functions**.

### Example in C++

```cpp
#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0) {
    return a + b + c;
}

int main() {
    cout << sum(10, 20, 3) << endl;  // Output: 33
    cout << sum(10, 20) << endl;     // Output: 30
    return 0;
}
