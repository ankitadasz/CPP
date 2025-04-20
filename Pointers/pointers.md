# Understanding Pointers in C++

## What is a Pointer?

A pointer is a variable used to **address the location of data** in memory.

```cpp
int* p;  // Declaration
p = &a;  // Initialization
```

## Dereferencing a Pointer

Dereferencing means accessing the data stored at the memory location pointed to by the pointer.

```cpp
cout << *p;  // Dereferencing
```

## Stack vs Heap Memory

- Code inside `int main()` can access **heap memory** directly but not other function stacks.
- Array created like this is stored in **stack memory**:

```cpp
int a[5] = {1, 2, 3, 4};  // Stack memory
```

- To allocate memory on the **heap**, use pointers:

```cpp
int* p = new int[3];  // Heap memory
```

## Memory Deallocation

- **Stack memory** is automatically deleted when it goes out of scope.
- **Heap memory** must be **manually deallocated** to avoid memory leaks.

> First deallocate the memory, then cut the pointer's access to it.  
> If you cut access before deleting, the memory stays on the heap, causing a **memory leak**.

## Dangers of Pointers

- Pointers can cause **runtime errors** if used carelessly.
- If a program has a pointer bug, it will affect others too, making the programmer look bad.
- Example: A company sells a car with a defect. Customers complain, which damages the brand—same with pointer-related bugs in software.

## Common Pointer Issues

- Uninitialized pointer
- Memory leak (heap memory not freed)
- Dangling pointer (accessing memory after it's deleted)

## Best Practices

- When not using a pointer anymore, assign it to **`nullptr`**.
- In modern C++, prefer `nullptr` over `NULL`.

```cpp
p = nullptr;  // Recommended
```
