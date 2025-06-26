#include<iostream>
using namespace std;
class Base{
    public:
   virtual void fun(){
        cout<<"Fun of Base"<<endl;
    }
};

class Derived:public Base{
    public:
    void fun(){
        cout<<"Fun of derived"<<endl;
    }

};
int main(){
    Base *p=new Derived();
    p->fun();
    Derived d;
    d.fun();

}