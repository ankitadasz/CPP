#include<iostream>
using namespace std;
int main(){
    int i,n,max;
    cout<<"Enter the no of elemnts:";
    cin>>n;
    int a[n];
    cout<<"Enter the elemnts:"<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<"The elemnts of the array are:";
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"The maximum element of the array is:"<<max;

}