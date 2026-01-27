#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the no of elemnts you want to enter:";
    cin>>n;
    int a[n];
    cout<<"Enter the elemnts you want to enter:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elemnts of the array are:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The sum of the elemnts of the array is:";
      for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum;
}