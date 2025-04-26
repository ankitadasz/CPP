# Local and Global Variables

- **Local variables** are declared inside a function, whereas **global variables** are declared outside the function.
- When a function is terminated, the local variables are also terminated, but the global variables are not.

## Scope and Variable Increment

- Suppose you have declared a global variable `g` and also have a local variable `g`.
- If you increment the variable `g` inside the function, **the local variable will be incremented**.
- This happens because **the variable nearest to the current scope is accessed first**, meaning the local variable takes precedence.
