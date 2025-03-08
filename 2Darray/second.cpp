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

//  for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (i == 0) {
//                 cout << mat[i][j] << " ";
//             } else if (i == row - 1) {
//                 cout << mat[i][j] << " ";
//             } else if (j == col - i - 1) {
//                 cout << mat[i][j] << " ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }



//  for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//            if(i==0||i==row-1){
//              cout<<mat[i][j]<<" ";
//            }
//            else if(j==col-i-1){
//              cout<<mat[i][j]<<" ";
//            }
//            else{
//              cout<<"  ";
//            }
//         }
//         cout << endl;
//     }

for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(i==row-j-1){
                cout<<mat[i][j];
            }
            else{
                cout<<"a";
            }


        }
        cout << endl;
    }


    return 0;
}