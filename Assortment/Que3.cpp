#include<iostream>
#include<vector>

using namespace std;

int main() {

    int row, col;
    cin>>row;
    cin>>col;
    
    vector<vector<int>> matrix(row, vector<int>(col));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }

    vector<vector<int>> transpose(col, vector<int>(row));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0;i<transpose.size();i++){
        for(int j=0;j<transpose[i].size();j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}