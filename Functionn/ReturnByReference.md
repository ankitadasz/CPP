### Return by Reference

- A function can **return a reference**.
- It **should not** return a reference to its local variables.
- It can return **formal parameters** if they are references.

#### Example:
```cpp
int& fun(int &a) {
    cout << a;
    return a;
}

int main() {
    int x = 10;
    fun(x) = 25;
    cout << x;
}
