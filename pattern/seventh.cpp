/* 
 
 *********
  *******
   *****
    ***
     *
    ***
   *****
  *******
 *********

  */


#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (k = 0; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 2; i <= n; i++)
    {
        for (k = 0; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}