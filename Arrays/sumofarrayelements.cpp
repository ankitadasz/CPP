#include<iostream>
using namespace std;
int main(){
    int n=5,i,sum=0;
    int a[n];
    cout<<"Give the elements of array:";
    cout<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array elements are:";
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
        sum=sum+a[i];
    }
    cout<<"Sum is:"<<sum;
}