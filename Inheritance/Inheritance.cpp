#include<iostream>
using namespace std;
class Base{
    public:
    int x;
    void show(){
        cout<<x;
    }
    };
    class Derived : public Base{
        public:
        int y;
        void display(){
            cout<<x<<" "<<y;
        }
    };
int main(){
    Base b;//object is created for class Base
    b.x=25;
    b.show();
    Derived d;//object is created for class Derived
    d.x=50;
    d.y=90;
    d.show();//it will call 50 value
    d.display();
    
    
}