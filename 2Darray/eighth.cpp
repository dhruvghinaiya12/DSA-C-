#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>> mat, int row, int col, int i, int j, int key,int result[])
{
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
            {
                result[0] = i;
                result[1] = j;
                return ;
            }
        }
    }
    return ;
}

int main()
{
    int result[2]={-1,-1};
    int row, col, i, j, key;
    cin >> row >> col >> key;
    vector<vector<int>> mat(row, vector<int>(col));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    print(mat, row, col, i, j,key,result);
    cout << result[0] <<result[1]<< endl;


    return 0;
}