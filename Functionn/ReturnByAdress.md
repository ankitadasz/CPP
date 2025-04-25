### Return by Address

- A function can return the **address of memory**.
- It **should not** return the address of local variables, as they will be disposed of after the function ends.
- It can return the address of memory allocated in the **heap**.

#### Example:
```cpp
int* fun(int n) {
    int* p = new int[n];
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    return p;
}

int main() {
    int* ptr = fun(5);
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << endl;
    }
}
