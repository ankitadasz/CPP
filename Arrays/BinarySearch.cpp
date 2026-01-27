#include<iostream>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=9,mid,i,key=1;
    while(low<=high){
    mid=(low+high)/2;
        if(a[mid]==key){
            cout<<key<<" is present at "<<mid+1<<" position";
            break;
        }
        else if(a[mid]<key){
            low=mid+1;

        }
        else if(a[mid]>key){
            high=mid-1;
        }
    }
    
}