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


    Base b;
    Derived *ptr=&b;
    return 0;
}