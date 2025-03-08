#include<iostream>
#include<vector>
using namespace std;


int main(){
int i,j,row,col;
cin>>row>>col;
vector<vector<int>> mat(row,vector<int>(col));

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cin>>mat[i][j];
    }
}



    return 0;
}