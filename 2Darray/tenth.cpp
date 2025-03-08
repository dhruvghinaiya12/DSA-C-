#include<iostream>
#include<vector>
using namespace std;


int diagonalSum(vector<vector<int>>mat,int row,int col){
int i,j,sum=0;
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        if(i==j){
            sum+=mat[i][j];
        }
        else if(j==col-i-1){
            sum+=mat[i][j];
        }
    }
}
return sum;

}

int main(){
int i,j,row,col;
cin>>row>>col;
vector<vector<int>> mat(row,vector<int>(col));

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cin>>mat[i][j];
    }
}

int result=(diagonalSum(mat,row,col));
cout<<result<<endl;

    return 0;
}