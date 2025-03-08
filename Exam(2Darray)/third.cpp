// print reverse N
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

for(i=mat.size()-1;i>=0;i--){
    for(j=mat[i].size()-1;j>=0;j--){
       if(i==j||j==0||j==col-1){
        cout<<mat[i][j]<<" ";
       }
       else{
        cout<<"  ";
       }
    } 
    cout<<endl;
}
    return 0;
}

/*
1 2 3 4
5 6 7 8
9 0 1 2
3 4 5 6
*/