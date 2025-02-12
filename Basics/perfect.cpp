#include <iostream>
using namespace std;
int main()
{
    int fact, i, n = 6, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            cout << endl;
            sum=sum+i;
            
        }
  
 }cout<<sum; 
 if(n==sum){
    cout<<"Its a perfect number!";
 }
 else{
    cout<<"its not a perfect number";
 }
}