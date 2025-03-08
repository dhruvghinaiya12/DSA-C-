/*   1.

     1
     22
     333
     4444

*/

/*   2.
     
      1
     23
    345
   4567
     
   */

#include<iostream>
using namespace std;

int main(){
int i,j,n,k;

cin>>n;
// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<endl;
// }

for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<j+i-1;
    }
    cout<<endl;
}


    return 0;
}