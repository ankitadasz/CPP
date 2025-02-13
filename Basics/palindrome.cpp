#include<iostream>
using namespace std;
int main(){
    int n=123,ld,rev,no=n;
    cout<<"Reverese of the Number"<<n<<"is";
    while(n>0){
        ld=n%10;
        rev=ld;
        cout<<rev;
        n=n/10;
    }
    cout<<endl;
    if(no==rev){
        cout<<"its a palindrome";
    }
    else{
        cout<<"its not a palindrome";
    }
}