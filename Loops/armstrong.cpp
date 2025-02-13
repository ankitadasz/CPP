#include<iostream>
using namespace std;
int main(){
    int n=153,arm=0,ld,no=n;
    while(n>0){
     ld=n%10;
     arm=arm+(ld*ld*ld);
     n=n/10;
    }
    cout<<arm ;
    if(no==arm){
        cout<<" Its an armstrong number";
    }
    else{
        cout<<"its not a armstrong number";
    }
}