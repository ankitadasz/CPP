#include<iostream>
using namespace std;
int AddTwo(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
      int a,b,c;
      c=AddTwo(5,10);
      cout<<"sum is:"<<c;
}