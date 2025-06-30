#include<iostream>
using namespace std;
class Base{
    public:
    virtual void Fun1()=0;
    virtual void Fun2()=0;
};

class Derived: public Base{
    public:
    void Fun1(){
        cout<<"Fun1 of derived class"<<endl;
    }
    void Fun2(){
        cout<<"Fun2 of derived class"<<endl;
    }
};
int main(){
    Derived d;
    d.Fun1();
    d.Fun2();
    Base *p=new Derived();
    p->Fun1();
    p->Fun2();

}