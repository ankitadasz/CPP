#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main()
{
    Complex x1, x2, x3;
    x1.real = 5;
    x1.img = 3;
    x2.real = 10;
    x2.img = 5;
    x3 = x2+x1;
    cout << x3.real << "+" << x3.img << "i";
}
