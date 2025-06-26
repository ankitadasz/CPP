#include<iostream>
using namespace std;
class BasicCar{
    public:
    virtual void Fun(){
        cout<<"my Basic Car"<<endl;
    }
};
class AdvanceCar:public BasicCar{
    public:
    void Fun(){
        cout<<"My advance car"<<endl;
    }
};
int main(){
    AdvanceCar b;
    b.Fun();
    BasicCar *ptr=&b;
    ptr->Fun();
    return 0;
}