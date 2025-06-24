#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "in A" << endl;
    }
};

class B 
{

public:
    void fun()
    {
        cout << "in B" << endl;
    }
};
class C : public A , public B
{
    
};

int main()
{
    C c;
    c.A::fun();
    c.B::fun();

}