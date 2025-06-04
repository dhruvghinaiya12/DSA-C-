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

    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[i].size();j++){
    //  cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

int max=matrix[0][0];
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[i].size();j++){
        if(matrix[i][j]>max){
            max=matrix[i][j];
        }
    }
}
cout<<"Max number in array is : "<<max;

    return 0;
}