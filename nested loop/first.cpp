#include <iostream>
using namespace std;

int main()
{

    int i, j, n, m, count = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (j - i == 0)
            {
                count++;
            }
            cout << i << " " << j << endl;
        }
    }

    cout << "Number of pairs: " << count << endl;
    return 0;
}