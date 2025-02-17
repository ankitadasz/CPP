#include<iostream>
using namespace std;
int main(){
    int n=5,i,low=0,high=n-1,mid,key;
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
    while(low<=high){

   
    mid=(low+high)/2;
    if(a[mid]==key){
        cout<<key<<" is found at index "<<mid+1;
        return 0;
    }
    else if(a[mid]>key){
        high=mid-1;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    
}
cout<<"Key is not present"; 
}