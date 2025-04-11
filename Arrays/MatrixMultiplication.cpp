#include <iostream>
using namespace std;
int main()
{
    int i, j, k, r1, c1, r2, c2;
    int a[3][3], b[3][3], c[3][3];
    cout << "enter r1,c1,r2,c2" << endl;
    cin >> r1 >> c1 >> r2 >> c2;
    cout << "enter the element of the 1st array:" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "the element of the 1st array:" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "enter the element of the 2nd array:" << endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "enter the element of the 2nd array:" << endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cout << b[i][j]<<" ";
        }
        cout<<endl;
    }

    if (c1 != r2)
    {
        cout << "multiplication cant be performed!!";
        return 0;
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
    }
      cout<<"After the multiplication of two matrices the new matrix is:"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}