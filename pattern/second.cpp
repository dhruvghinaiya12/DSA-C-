#include<iostream>
using namespace std;

int main() {
int i,j,k,n;
cin>>n;

// for(i=1;i<=n;i++) {
//     for(k=n-i;k>0;k--) {
//         cout<<" ";
//     }
//     for(j=1;j<=i;j++) {
//         cout<<"*";
//     }
//     cout<<endl;
// }
for (int i = 1; i <= n; i++) { 
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        
        for (int k = 1; k <= n - i + 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}