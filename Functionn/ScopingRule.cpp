#include<iostream>
using namespace std;
int x=10;
int main(){
       int x=1;
       {
        int x=5;
        cout<<x<<endl;
       }
       cout<<x<<endl;
       cout<<::x;
}