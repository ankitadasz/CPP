#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    int a;
    static int count;
    Test()
    {
        a=10;
        count++;
    }
    static int getCount(){
        return count;
    }
};
int Test::count=0;
int main(){
    Test t1,t2;
    cout<<Test::getCount<<endl;
    return 0;
}
//static members are usually used for static member of a class
//they belong to a class dont belong to a object