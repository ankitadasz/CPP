#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
class Shape{
    public:
    virtual float Area()=0;
    virtual float Perimeter()=0;
};
class Rectangle : public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(float l=1,float b=1){
         length=l;
         breadth=b;
    }
    float Area(){
        return length*breadth;
    }
    float Perimeter(){
        return 2*(length+breadth);
    }
};
class Circle : public Shape{
    private:
    float r;
    public:
    Circle(float radius){
         r=radius;

    }
    float Area(){
        return M_PI*r*r;
    }
    float Perimeter(){
       return 2*M_PI*r;
    }

};
int main(){
    Shape *s=new Rectangle(2,3);
    cout<<"Area Of The Rectangle Is:"<<s->Area()<<endl;
    cout<<"Perimeter Of The Rectangle Is:"<<s->Perimeter()<<endl;
    s=new Circle(5);
    cout<<"Area Of The Circle Is:"<<s->Area()<<endl;
    cout<<"Perimeter Of The Circle Is:"<<s->Perimeter()<<endl;


}