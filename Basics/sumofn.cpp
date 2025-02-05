#include<iostream>
using namespace std;
int main(){
    int i,n,sum;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=0;i<n;i++){
        sum=(n*(n+1))/2;
        cout<<"sum is:"<<sum;
        return 0;
    }
}