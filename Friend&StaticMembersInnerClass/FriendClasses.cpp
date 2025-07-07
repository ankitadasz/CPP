#include<iostream>
using namespace std;
class your;
class my{
    private: int a=8;
    public:int b=2;
    protected:int c=5;
   
    friend your;
};
class your{
    public:
    my m;
    void fun(){
        cout<<m.a;
    }
};
int main(){
    your obj;
    obj.fun();
    return 0;
}