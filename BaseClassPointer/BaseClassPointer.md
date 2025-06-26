Suppose you have a **base class** and a **derived class**.

- You can make a pointer of the **base class** and use it to access an object of the **derived class**.
- However, using the base class pointer, you can **only access the functions and members of the base class**, not those of the derived class (unless they are overridden and accessed via virtual functions).

You **cannot** make a pointer of the **derived class** and use it to access an object of the **base class**.  
This is because the derived class may have more functionalities or members which the base class doesn't have, and trying to treat a base object as a derived one is unsafe.

### Analogy

Suppose:
- `BasicCar` = Base class
- `AdvancedCar` = Derived class

You **can** say that an `AdvancedCar` is a `BasicCar`,  
but you **cannot** say that a `BasicCar` is an `AdvancedCar`.

That’s because not all basic cars have advanced features.
