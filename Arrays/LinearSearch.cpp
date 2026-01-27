#include<iostream>
using namespace std;
int main(){
    int i,n,key,flag;
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
    cout<<"Enter the key value:";
    cin>>key;
    for(i=0;i<n;i++){
        if(key==a[i]){
        flag=0;
           cout<<key<<"is found at "<<i+1<<" position"<<endl;
        }
    }    
    if(flag!=0){
        cout<<key<<" is not present in the array";
    }     
}