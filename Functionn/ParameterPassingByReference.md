### Call by Reference

- Actual parameters are **passed as reference**.
- Formal parameters can **directly access** actual parameters.
- Function call is converted into **inline function**, if not possible it becomes **call by address**.
- References **don’t take extra memory**.
- Syntax is same as **Call by Value**, except formal parameters are **references**.

#### Example:
```cpp
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout << x << y;
}
