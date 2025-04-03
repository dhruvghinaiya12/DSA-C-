// #include <iostream>

// using namespace std;

// bool checkprime(int num)
// {
//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int num;
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         if (checkprime(i))
//         {
//             cout << i << " "<<endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;


bool checkprime(int num){
    int count = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2){
        return true;
    }
    return false;
}

int main()
{

    int row, col, i, j,num;
    cin >> row >> col;
    vector<vector<int>> mat(row, vector<int>(col));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            num = mat[i][j];
            if (checkprime(num)){
                cout << num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}