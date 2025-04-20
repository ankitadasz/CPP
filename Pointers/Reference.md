# Understanding References in C++

## What is a Reference?

A reference is **another name given to a variable**. It acts as an alias and does not take additional memory.

### Example:

```cpp
int x = 10;
int &y = x;  // y is a reference to x
```

- `y` is just another name for `x`.
- `int &y = a;` — Not possible after declaring `y` to reference `x`.

> A reference shares the same memory as the original variable.  
> Think of it like: *"My brother buys a car, so it's also mine" — no extra memory is used.*

### r-value vs l-value

```cpp
int a;
a = x;     // r-value: stores the value of a variable
x = 25;    // l-value: refers to the address/location of the data
```

## Summary (In Short)

- **Reference** is an **alias** of a variable.
- It **must be initialized** at the time of declaration.
- It **doesn’t take extra memory**.
- It **cannot be changed** to refer to another variable.
- **Syntax** for reference:

```cpp
int &y = x;
```

> ⚠️ You **can't declare a reference without initializing it.**

