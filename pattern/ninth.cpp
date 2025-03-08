/*-----------
   1
  232
 34543
4567654

------------*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; 

    for (int i = 1; i <= n; i++) { 
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }

        for (int j = i; j < 2 * i; j++) {
            cout << j;
        }

        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl; 
    }

    return 0;
}
