#include<iostream>
using namespace std;
int main(){
    int key,n=5,i;
    int a[n];
    cout<<"enter the key value:";
    cin>>key;
    cout<<"Enter the value of the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array element are:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    for(i=0;i<n;i++){
       if(key==a[i]){
        cout<<"key" <<"is present at index"<< (i+1);
       }
    }
}