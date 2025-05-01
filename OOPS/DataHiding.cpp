#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
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
    Rectangle r;
    r.setLength(-10);
    r.setBreadth(-20);
    cout << r.getBreadth()<<endl;
    cout << r.getLength();
}
