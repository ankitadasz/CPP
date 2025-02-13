#include<iostream>
using namespace std;
int main(){
    int n=123,sum=0,i,ld;
    while(n>0){
    ld=n%10;
    sum=sum+ld;
    n=n/10;
    }
    cout<<sum;
}