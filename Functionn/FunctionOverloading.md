## Function Overloading in C++

- **Method overloading** (or **function overloading**) means having **multiple functions with the same name** but **different parameters**.
- This is useful when you want to perform the same operation with different numbers or types of arguments.
- For example, if you're writing an `add` function, you don’t need to write `addTwo`, `addThree`, etc. — just overload the `add` function with different parameter sets.
- **Note**: Overloading is based on the number or types of parameters — **not the return type**.

### ✅ Key Points:
- If more than one function has the same name but **different parameter lists**, they are **overloaded functions**.
- **Return type is not considered** in overloading.
- Function overloading helps achieve **compile-time polymorphism**.

---

### 🔢 Example: Function Overloading Using `sum` Function

```cpp
#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << sum(10, 5) << endl;
    cout << sum(12.5f, 3.4f) << endl;
    cout << sum(10, 20, 3) << endl;
    return 0;
}
