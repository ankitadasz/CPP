#include<iostream>
using namespace std;
int main(){
    int i,j,count=1,n=4;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}