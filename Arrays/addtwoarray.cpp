#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a[2][3]={1,2,3,4,5,6},b[2][3]={1,2,3,4,5,6},c[2][3];
    for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
    }
}