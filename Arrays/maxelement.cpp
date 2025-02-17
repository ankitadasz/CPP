#include <iostream>
using namespace std;
int main()
{
    int n = 3, max, i;
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
         << "Maximum element is:" << endl;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << max;
}
