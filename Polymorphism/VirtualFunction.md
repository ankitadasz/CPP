### Base and Derived Function Behavior with Base Class Pointer
When you have a **function in the base class** and a **function with the same name in the derived class**, and you create a **pointer of the base class** pointing to an **object of the derived class**, the behavior depends on whether the function is marked as `virtual`:  
- If the function is **not virtual**, the **base class function** will be called.  
- If the function is marked **`virtual`** in the base class, the **derived class function** will be called. This is called **function overriding** and works through **runtime polymorphism**.

#### 📌 Example:
```cpp
#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function\n";
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();  // Output: Derived class function
    return 0;
}
```

If you **remove** the `virtual` keyword from the base class:
```cpp
class Base {
public:
    void show() {
        cout << "Base class function\n";
    }
};
```

Then `ptr->show();` will output:
```
Base class function
```

#### ✅ Summary:
| Function Type        | Output                  |
|----------------------|-------------------------|
| Non-virtual function | Base class function     |
| Virtual function     | Derived class function  |
