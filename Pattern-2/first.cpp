/* 1.---------------
    1
   23
  345
 4567
56789
-------------------*/

/*  2.-------------
    1
   232
  34543
 4567654
567898765
-------------*/


#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<j+i-1;
    }
    cout<<endl;
}

// for(i=1;i<=n;i++){
//     for(k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(j=1;j<=i;j++){
//         cout<<j+i-1;
//     }
//     for (j=i-1;j>=1;j--) {
//         cout<<j+i-1;
//     }
   
//     cout<<endl;
// }

    return 0;
}