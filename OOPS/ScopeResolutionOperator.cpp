#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter();
};
int Rectangle::perimeter()
{ // scope resolution says that the scope of this function belongs to the class rectangle
    return 2 * (length + breadth);
}