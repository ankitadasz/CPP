#include <iostream>
using namespace std;
int main()
{
    int n = 3, min, i;
    int a[n];
    cout << "Enter the array elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The array is:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl
         << "Minimum element is:" << endl;
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << min;
}
