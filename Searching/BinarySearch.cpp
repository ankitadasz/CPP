#include <iostream>
using namespace std;
int main()
{
    int n = 5, key, low = 0, high = n - 1, i, mid;
    int a[n];
    cout << "Enter the key value:";
    cin >> key;
    cout << "Enter the elements of the array:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The array elements are:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            cout << key << "is present at" << mid + 1 << endl;
            return 0;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "enter a sorted array!";
}