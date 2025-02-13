#include<iostream>
using namespace std;
int main(){
    int m=4,n=2,d;
    while(m!=n){
        if(m>n){
          m=m-n;
        }
        else{
            n=n-m;
        }
        cout<<m;
    }
}