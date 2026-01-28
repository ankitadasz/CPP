#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 4, count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << count + 1 << " ";
            count++;
        }
        cout << endl;
    }
}