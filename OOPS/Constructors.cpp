#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle()
    // {
    //     length = 1;
    //     breadth = 1;
    // }
    Rectangle(int l=1, int b=1)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r){
        length=r.length;
        breadth=r.breadth;
    }

    void setLength(int l)
    {
        if (l < 0)
        {
            length = 1;
        }
        else
            length = l;
    }
    void setBreadth(int b)
    {
        if (b < 0)
        {
            breadth = 1;
        }
        else
            breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int Area()
    {
        return length * breadth;
    }
    int Perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r(10,50);
    Rectangle r1(r);
    cout << r1.Area();
}
