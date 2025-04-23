# Parameter Passing Methods in C++

C++ supports three parameter passing methods:

---

## 1. Pass-By-Value
- Value of actual parameters is passed to the function.
- Function works on a **copy** of the values.
- Changes inside the function **do not** affect original variables.

### Example:
```cpp
#include <iostream>
using namespace std;

void display(int a, int b)
{
    a = a + 10;
    b = b + 20;
    cout << "Inside function: " << a << " " << b << endl;
}

int main()
{
    int a = 5, b = 10;
    display(a, b);
    cout << "Inside main: " << a << " " << b << endl;
    return 0;
}
```
**Output:**
```
Inside function: 15 30
Inside main: 5 10
```

---

## 2. Pass-By-Address
- **Address** of actual parameters is passed to the function.
- Formal parameters are **pointers**.
- Function can **modify** the original variables.

### Example:
```cpp
#include <iostream>
using namespace std;

void display(int* a, int* b)
{
    *a = *a + 10;
    *b = *b + 20;
    cout << "Inside function: " << *a << " " << *b << endl;
}

int main()
{
    int a = 5, b = 10;
    display(&a, &b);
    cout << "Inside main: " << a << " " << b << endl;
    return 0;
}
```
**Output:**
```
Inside function: 15 30
Inside main: 15 30
```

---

## 3. Pass-By-Reference
- Actual parameters are passed **as references**.
- Function can **directly modify** the original variables.
- No need to use pointers.

### Example:
```cpp
#include <iostream>
using namespace std;

void display(int& a, int& b)
{
    a = a + 10;
    b = b + 20;
    cout << "Inside function: " << a << " " << b << endl;
}

int main()
{
    int a = 5, b = 10;
    display(a, b);
    cout << "Inside main: " << a << " " << b << endl;
    return 0;
}
```
**Output:**
```
Inside function: 15 30
Inside main: 15 30
```

---

# Quick Summary

| Method              | What is Passed        | Can Modify Original? | Use of Pointers/References |
|---------------------|------------------------|-----------------------|-----------------------------|
| Pass-By-Value        | Copy of Value           | No                    | No                          |
| Pass-By-Address      | Address (Pointer)       | Yes                   | Yes (pointers needed)        |
| Pass-By-Reference    | Reference (Alias)       | Yes                   | Yes (direct references)      |

---

# Important Terms
- **Actual Parameters**: Parameters used in the function call (in `main()`).
- **Formal Parameters**: Parameters received in the function definition.

### Example:
```cpp
void func(int x, int y) // formal parameters
{
    // function body
}

int main()
{
    int a = 5, b = 10;
    func(a, b); // actual parameters
}
```

---

# Extra Example: Swap Program (Call-By-Value)

```cpp
#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y; // Output: 10 20 (No swap happens)
}
```
**Note:** No swap happens because swap() uses call-by-value and modifies only local copies.

---
