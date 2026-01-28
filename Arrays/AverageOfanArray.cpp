#include<iostream>
using namespace std;
int main(){
    int i,n=5,sum=0,avg;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The avg of the array elements are:";
     for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    cout<<avg;



}