# Function Pointers in C++

- You can use a **function pointer** if you don't want to call a normal function directly.
- A function pointer should **always be in brackets**, and you need to give **an extra pair of brackets** when calling the function.

### Example:

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fp)(int, int);  // Function pointer declaration
    fp = add;             // Initialization
    int result = (*fp)(5, 3);  // Calling the function using pointer
    cout << result;       // Output: 8
}
```

### 🔁 Reusability

- You can use **a single function pointer** for **multiple functions** that have the **same signature** (same return type and parameters).

```cpp
int max(int a, int b);
int min(int a, int b);

int (*fp)(int, int);

fp = max;
cout << (*fp)(10, 20);

fp = min;
cout << (*fp)(10, 20);
```

> Function pointers are powerful when you want dynamic behavior or want to switch between different functions at runtime.
