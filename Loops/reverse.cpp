#include<iostream>
using namespace std;
int main(){
    int n=123,ld,rev;
    cout<<"Reverese of the Number"<<n<<"is";
    while(n>0){
        ld=n%10;
        rev=ld;
        cout<<rev;
        n=n/10;
    }
}