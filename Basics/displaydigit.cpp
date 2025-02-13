#include<iostream>
using namespace std;
int main(){
    int n=123,i,ld;
    while(n!=0){
        ld=n%10;
        cout<<ld;
        cout<<endl;
        n=n/10;
    }
}