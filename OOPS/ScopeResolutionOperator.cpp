// scope resolution says that the scope of this function belongs to the class rectangle
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; };
    int getBreadth() { return breadth; };
    void setLength(int l);
    void setBreadth(int b);
    bool isSquare();
    ~Rectangle();
    int area();
    int perimeter();
};
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int Rectangle::area()
{
    return length * breadth;
}
bool Rectangle ::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed";
}
int main()
{
    Rectangle r(10,10);
    cout <<"Area"<< r.area()<<endl;
    cout << r.perimeter()<<endl;
    if(r.isSquare()){
        cout<<"yes"<<endl;
    }
}