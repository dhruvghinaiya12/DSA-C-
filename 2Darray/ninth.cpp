// max row sum

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int maxSum(vector<vector<int>> mat,int row,int col){
        int maxsum=INT_MIN;
        int i,j;

    for(i=0;i<row;i++){
        int crsum=0;
        for(j=0;j<col;j++){
            crsum+=mat[i][j];
        }
        if(crsum>maxsum){
            maxsum=crsum;
        }
    }
    return maxsum;
}


int main(){
    int row,col,i,j;
    cin>>row>>col;

    vector<vector<int>> mat(row,vector<int>(col));

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
   int result =maxSum(mat,row,col);
    cout<<"Maximum row sum: "<<result<<endl;

    return 0;
}
