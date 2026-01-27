#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no of elements you want to enter:";
    cin >> n;
    int a[n];
     cout << "Enter the elements you want to enter:";
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     cout << "Elements of the array are:";
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}