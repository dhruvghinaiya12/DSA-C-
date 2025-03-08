#include <iostream>
using namespace std;

int main()
{

    int i, j, n, m, sum = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i < j)
            {

                sum += i;
            }
                        cout << i << " " << j << endl;
        }
    }
            cout  << sum << endl;
    return 0;
}