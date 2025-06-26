#include<iostream>
using namespace std;
class Rectangle{
    public:
    void Area(){
        cout<<"Area of rectangle"<<endl;
    }
};
class Cuboid:public Rectangle{
    public:
    void Volume(){
        cout<<"Volume of Cuboid"<<endl;
    }
};
int main(){
   Cuboid c;
   Rectangle *ptr=&c;
   ptr->Area();
}