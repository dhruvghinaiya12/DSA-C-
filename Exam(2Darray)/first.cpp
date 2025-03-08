#include<iostream>
#include<vector>
using namespace std;

int main(){
int row ,col,i,j;

cin>>row>>col;

vector<vector<int>> mat(row,vector<int>(col));

for(i=0;i<row;i++){

    for(j=0;j<col;j++){
        cin>>mat[i][j];
    }
}

for(i=0;i<mat.size();i++){
    for(j=0;j<mat[i].size();j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
 
}


    return 0;
}