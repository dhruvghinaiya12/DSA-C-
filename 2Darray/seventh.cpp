#include <iostream>
#include <vector>

using namespace std;

bool print(vector<vector<int>> mat, int row, int col, int i, int j, int key)
{
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

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

    // bool result = print(mat, row, col, i, j,key);
    // cout << result << endl;

    if(print(mat,row,col,i,j,key)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}