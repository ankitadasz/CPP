#include <iostream>
using namespace std;
class A
{
public:
    void fun1()
    {
        cout << "in fun1" << endl;
    }
};

class D
{

public:
    void fun2()
    {
        cout << "in fun2" << endl;
    }
};
class C : public A, public D
{
public:
    void fun3()
    {
        cout << "in fun3" << endl;
    }
};
class B : public A
{
public:
    void fun4()
    {
        cout << "in fun4" << endl;
    }
};

int main()
{
    
    A a;
    B b;
    C c;
    D d;
    c.fun1();
    c.fun2();
    c.fun3();
    b.fun1();
    b.fun4();
}