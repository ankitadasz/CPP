#include <iostream>
using namespace std;
class Rectangle
{
public:
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
/// THE OBJECT IS CREATED INSIDE STACK///
int main()
 {
    Rectangle r;
    Rectangle *p;
     p = &r;
     p->length = 10;
     p->breadth = 20;
     cout << p->area();
}
/// THE OBJECT IS CREATED INSIDE HEAP///
int main()
{
    Rectangle *p;
    p = new Rectangle();
    Rectangle *q = new Rectangle();
    p->length = 10;
    p->breadth = 20;
    cout << p->area();
}