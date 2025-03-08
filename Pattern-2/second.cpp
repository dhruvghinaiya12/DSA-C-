/* 1.-----------

A
B B
C C C
D D D D
-------------*/

/* 2.-----------

A
B C
D E F
G H I J
--------------*/

/* 3.--------------

A A A A
B     B
C     C
D D D D
-----------------*/


#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
char letter='A';

// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         cout<<letter<<" ";
//     }
//         letter++;
//     cout<<endl;
// }

// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//      cout<<letter<<" ";
//      letter++;
//     }
//     cout<<endl;
// }


for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){ 
        if(i==1||i==n||j==1||j==n){
            cout<<letter<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    letter++;
    cout<<endl;
}

    return 0;
}