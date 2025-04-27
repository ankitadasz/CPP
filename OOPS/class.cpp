#include <iostream>
using namespace std;
class Rectangle
{
public: // if you are not using public here you cant access lengt and breadth in the main
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2;//object are created
    r1.length = 10;
    r1.breadth = 20;
    cout<<r1.area()<<endl;
    r2.length=30;
    r2.breadth=40;
    cout<<r2.perimeter()<<endl;
    cout<<r1.perimeter()<<endl;
}