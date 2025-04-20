#include<iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,4,5};
    int *p=A,*q=&A[4];
    cout<<q-p;
    // cout<<*p<<endl;
    // cout<<*(p+3)<<endl;
    // // p++;
    // cout<<*p;
    // cout<<p;
    // for(int i=0;i<5;i++){
    //     cout<<*p<<endl;
    //     p++;
    // }
    // cout<<p;
}
