/* 1.-----------

1
23
456
78910
-------------*/

/* 2.----------

    1
   2 3
  4 5 6
 7 8 9 10 
-------------*/

/* 3.-------------

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
---------------*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1,m;
    cin>>n;

    // for(i=1;i<=n;i++){

    //     for(j=1;j<=i;j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }

//   for(i=1;i<=n;i++){
//    for(m=1;m<=n-i;m++){
//     cout<<" ";
//    }
//         for(j=1;j<=i;j++){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }


  for(i=1;i<=n;i++){
   for(m=1;m<=n-i;m++){
    cout<<" ";
   }
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}