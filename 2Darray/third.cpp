#include<iostream>
#include<vector>

using namespace std;

int main(){

int row,col,i,j;
cin>>row>>col;
vector<vector<int>> mat(row,vector<int>(col));
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cin>>mat[i][j];
    }
}

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
       if(i==0||j==0||i==row-1||j==col-1){
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