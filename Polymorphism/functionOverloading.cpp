#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"hello ankita"<<endl;
    }
    int sayHello(int n){
        cout<<"hello ankita"<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }
};
int main(){
   A a;
   a.sayHello();
}