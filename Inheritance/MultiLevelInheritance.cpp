#include<iostream>
using namespace std;
class Animal{
   public:
   int age;
   int weight;
   public:
   void eat(){
    cout<<"Eating"<<endl;
   }
};

class Dog : public Animal{
    
};
class cat : public Dog{

};
int main(){
    cat c;
    c.eat();
}