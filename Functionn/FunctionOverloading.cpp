#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
float add(float a,float b){
    return a+b;
}
int main(){
    cout<<add(3.2f,2.3f);
}