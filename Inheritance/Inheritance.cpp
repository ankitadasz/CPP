#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};
class male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "male sleeping";
    }
};

int main()
{

    // male obj1;
    // cout << obj1.age << endl;
    // cout << obj1.height << endl;
    // cout << obj1.weight << endl;
    // cout << obj1.color << endl;
    // obj1.sleep();
    // cout << endl;
    // obj1.setWeight(87);
    // cout << obj1.weight << endl;
    male m1;
    cout<<m1.height;
      
    return 0;
}
