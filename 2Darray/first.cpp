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

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
     cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

 for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
     cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}