/* 1.
   ******
   *****
   ****
   ***
   **
   *
*/
/* 2.
   ******
    *****
     ****
      ***
       **
        *
*/


#include<iostream>
using namespace std;

int main(){
    int n ,i ,j,k;
    cin>>n;
    // for(i=n; i>=1; i--){
    //     for(j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
 
 for(i=n; i>=1; i--){
    for(k=1;k<=n-i; k++){
        cout<<" ";
   
 }
for(j=1; j<=i; j++){
cout<<"*";
}
 cout<<endl;
 }
    return 0;
}