## 🧠 Object-Oriented Concepts Summary

### 🔷 Abstract Class
- A class having at least one **pure virtual function** is called an **abstract class**.
- A **pure virtual function** is declared like this:
```cpp
virtual void Start() = 0;
You cannot create an object of the base class but can create a pointer of that class.
Use Cases Based on Base Class Function Types
If the base class contains all concrete functions, the motive is reusability.

If the base class contains some concrete and some pure virtual functions, the motive is reusability and polymorphism — this class is known as an abstract class.

If the base class contains all pure virtual functions, the motive is polymorphism — this kind of class is known as an interface, and it is also an abstract class.

