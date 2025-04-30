#include <iostream>
using namespace std;
class Rectangle
{
private: 
    int length;
    int breadth;
    public:
    void setLength(int l){
        if(length>0){
             length=l;
        }
       
    }
    void setBreadth(int b){
        if(breadth>0){
             breadth=b;
        }
       
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(20);
}