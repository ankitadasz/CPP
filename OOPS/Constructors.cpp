#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    { // NONPARAMETERIZED CONSTRUCTOR
        length = 0;
        breadth = 0;
    }
};
Rectangle r();