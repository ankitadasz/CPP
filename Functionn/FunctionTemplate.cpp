#include<iostream>
using namespace std;

template<class T>
T maximum(T x,T y){
    if(x>y)
    return x;
    else 
    return y;
}
int main(){
  cout<<maximum(10,20)<<endl;
  cout<<maximum(.10,.20);

}