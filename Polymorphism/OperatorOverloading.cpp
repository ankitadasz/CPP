#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

public:
int add(){
    return a+b;
}
void operator+(B & obj){
    cout<<"Hellobabar"<<endl;
}
};
int main(){

    B b1,b2;
    b1.
}