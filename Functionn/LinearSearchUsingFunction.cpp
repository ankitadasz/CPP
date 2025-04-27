#include <iostream>
using namespace std;
void linearSearch(int a[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            cout << "key value is present at" << i + 1 << " place";
            return; // we used return here to exit the function immidiately after the work finished
        }
    }
    cout << "Its not in the array";
}
int main()
{
    int b[] = {1, 2, 3, 4, 5}, key = 9;
    int size = sizeof(b) / sizeof(b[0]);
    linearSearch(b, size, key);
}