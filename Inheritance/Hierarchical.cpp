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

class B : public A
{

public:
    void fun2()
    {
        cout << "in fun2" << endl;
    }
};
class C : public A 
{
    public:
    void fun3(){
        cout<<"in fun3"<<endl;
        }
};

int main()
{
    A a;
    a.fun1();
    B b;
    b.fun2();
    b.fun1();
    C c;
    c.fun3();
    c.fun1();

}