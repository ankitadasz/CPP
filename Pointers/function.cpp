#include<iostream>
using namespace std;
// void display(){
//     cout<<"HELLO ANKITA";
// }
// int main(){
//     void (*fp)();//declaration
//     fp=display;//initialization
//     (*fp)();//call
// }


//using function pointer for many function...
int max(int x,int y){
    return x>y?x:y;
}
int min(int x,int y){
    return x<y?x:y;
}
int main(){
    int (*fp)(int,int);
    fp=max;
    cout<<(*fp)(12,10)<<endl;
    fp=min;
    cout<<(*fp)(12,10);
}