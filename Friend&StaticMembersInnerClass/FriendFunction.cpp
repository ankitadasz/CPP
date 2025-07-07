#include<iostream>
using namespace std;
class Test{
    private:int a;
    public:int b;
    protected:int c;
    friend void Fun();
};
void Fun(){
    Test t;
    t.a=9;
    t.b=3;
    t.c=2;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c<<endl;

}
int main(){
   Fun();
}