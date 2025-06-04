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

    int row_number;
    cout<<"Enter the row number: ";
    cin>>row_number;

    cout<<"element of "<<"row "<<row_number<< " is : ";
    for(int i=0;i<col;i++){
        cout<<matrix[row_number][i]<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i=0;i<col;i++){
        sum+=matrix[row_number][i];
    }
    cout<<"The sum of "<<row_number<<" row is "<<sum<<endl;

    int col_number;
    cout<<"Enter the column number: ";
    cin>>col_number;

    cout<<"element of "<<"column "<<col_number<< " is : ";
    for(int i=0;i<row;i++){
        cout<<matrix[i][col_number]<<" ";
    }
    cout<<endl;

    int sum2=0;
    for(int i=0;i<row;i++){
        sum2+=matrix[i][col_number];
    }
    cout<<"The sum of "<<col_number<<" column is "<<sum2<<endl;

    return 0;
}