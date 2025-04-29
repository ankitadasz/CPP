Here's your content converted into **Markdown** format:

```markdown
## Object Creation in Java vs C++

### Java:
- In Java, you **cannot** create an object on the stack.
- Objects are **always created in the heap** using the `new` keyword.

### C++:
- In C++, you **can** create objects both on the stack and the heap.

### Methods to Create Objects in C++:

- **In Stack:**
  ```cpp
  Rectangle r;
  ```

- **In Heap:**
  ```cpp
  Rectangle *p = new Rectangle();
  ```

### Accessing Members:

- **Dot (`.`) Operator**: Used to access members using a variable name (i.e., non-pointer object).
- **Arrow (`->`) Operator**: Used to access members through a pointer to an object.

### Pointer Size:
- A pointer typically takes **2 bytes** of memory.
- However, this depends on the **compiler and system architecture**, so it can also be **4 bytes** or even **8 bytes** on 64-bit systems.
```

