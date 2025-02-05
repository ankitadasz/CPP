#include<iostream>
using namespace std;
int main(){
    float ns,bs,al,de;
    cout<<"Enter the value of bs:\n";
    cin>>bs;
    cout<<"Enter the value of al:\n";
    cin>>al;
    cout<<"Enter the value of de:\n";
    cin>>de;
    ns=bs+(bs*al/100 - bs*de/100);
    cout<< ns;


}