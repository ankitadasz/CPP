#include<iostream>
using namespace std;
class BasicCar{
    public:
    void Start(){
        cout<<"car started";
    }
};
class AdvanceCar: public BasicCar{
    public:
    void PlayMusic(){
        cout<<"Music Playing"<<endl;
    }
};
int main(){

    AdvanceCar a;
    BasicCar*ptr=&a;
    ptr->Start();
    a.Start();
    a.PlayMusic();
}