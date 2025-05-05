class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r(10, 5);
    return 0;
}
// using this pointer you can refer to the meber of the current object