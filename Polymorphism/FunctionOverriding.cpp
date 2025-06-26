#include<iostream>
using namespace std;
class Base{
    public:
    void Display(){
        cout<<"Display of base"<<endl;
    }
};
class Derived:public Base{
    public:
    void Display(int n){
        cout<<"Display of Derived"<<endl;
      
        }
};
int main(){
    Derived d;
    d.Display(10);
}