#include<iostream>
using namespace std;
// int sum(int a,int b,int c=0){
//     return a+b+c;
// }
// int main(){
//   int c;
//   cout<<"sum is:"<<sum(1,2,5);
// }

//Max number
int max(int a,int b,int c=0){
    return a>b && a>c ? a:b>c?b:c;
}
int main(){
    cout<<"Max is:"<<max(10,12,78);
}