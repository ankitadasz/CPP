#include<iostream>
using namespace std;
int main(){
    int i,fact=1,n=5;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}