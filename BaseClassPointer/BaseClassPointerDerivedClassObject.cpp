#include<iostream>
using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"function1 of base"<<endl;
    }
};
class Derived:public Base{
    public:
    void fun2(){
        cout<<"function2 of derived"<<endl;
    }
};
int main(){


    Derived b;
    Base *ptr=&b;
    ptr->fun1();
    return 0;
}