#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int phy;
    int chem;
    int bio;

public:
    Student(int r, string n, int p, int c, int b)
    {
        roll = r;
        name = n;
        phy = p;
        chem = c;
        bio = b;
    }
    int total()
    {
        return phy + chem + bio;
    }
    string Grade()
    {
        float avg = (phy + chem + bio) / 3;
        if (avg > 60)
        {
            return "FIRST CLASS";
        }
        else if (avg > 40 && avg < 60)
        {
            return "SECOND CLASS";
        }
        else
            return "FAIL";
    }
};
int main()
{
    int r;
    string name;
    int p,c,b;
    cout << "Enter the roll no:" << endl;
    cin >> r;
    cout << "Enter the name:" << endl;
    cin >> name;
    cout << "Enter physics chemistry biology mark:" << endl;
    cin >> p >> c >> b;
    Student s(r, name, p, c, b);
    cout << "Total Marks:" << s.total() << endl;
    cout << "Graid Obtained:" << s.Grade() << endl;
}