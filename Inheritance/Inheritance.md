# Inheritance in C++

## What is Inheritance?

Inheritance is a key feature of object-oriented programming that allows one class to inherit properties and behaviors from another class. It promotes **reusability** in programs.

- The class that inherits is called the **Derived Class** or **Child Class**.
- The class being inherited from is called the **Base Class** or **Parent Class**.

### Syntax:
```cpp
class Derived : public Base {
    // class body
};
```

---

## Mode of Inheritance

### 1. Public Inheritance
- If the parent class members are `public`, they remain `public` in the child class.
- Accessible outside the class as well.

### 2. Private Inheritance
- Even if the parent class members are `public`, they become `private` in the child class.
- Not accessible outside the child class.

### 3. Protected Inheritance
- Public or protected members in the parent become `protected` in the child class.
- Accessible within the class and in derived classes.

---

## Access Table

| Parent Access | Child Inheritance | Resulting Access |
|---------------|-------------------|------------------|
| public        | public            | public           |
| public        | private           | private          |
| public        | protected         | protected        |
| protected     | public            | protected        |
| protected     | protected         | protected        |
| protected     | private           | private          |
| private       | public            | not accessible   |
| private       | protected         | not accessible   |
| private       | private           | not accessible   |

---

## Understanding `protected`

- `protected` members behave like `private` members with one difference:
  - They are **accessible in derived classes**.
  - But still **not accessible outside the class**.

---

## Types of Inheritance

- **Single Inheritance** – One base class, one derived class.
- **Multilevel Inheritance** – Class derived from another derived class.
- **Multiple Inheritance** – One class inherits from more than one base class.
- **Hierarchical Inheritance** – Multiple classes inherit from one base class.
- **Hybrid Inheritance** – Combination of more than one type of inheritance.

---

## Inheritance Ambiguity

Occurs in **multiple inheritance** when two base classes have functions with the **same name**. It becomes unclear which function to call from the derived class.

### Example:

```cpp
class A {
public:
    void func1() {
        cout << "From A";
    }
};

class B {
public:
    void func1() {
        cout << "From B";
    }
};

class C : public A, public B {
    // ambiguity: func1() exists in both A and B
};

int main() {
    C obj;
    // obj.func1(); // Error: ambiguous

    obj.A::func1(); // Calls A's function
    obj.B::func1(); // Calls B's function
}
```

Use **scope resolution** to resolve ambiguity:
```cpp
C.A::func1();
C.B::func1();
```

---
