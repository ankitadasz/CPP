class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();//Non parameterized constructor
    Rectangle(int l, int b);//parameterized constructor
    Rectangle(Rectangle &r); // cpoy constructor which takes reference of the rectangle
    void setLength(int l);//mutator
    void setBreadth(int b);//mutator
    int getLength();//accessors
    int getBreadth();//accessors
    int area();//facillators
    int perimeter();//facillators
    int isSquare(); //enquiry
    ~Rectangle();//Destructor
};