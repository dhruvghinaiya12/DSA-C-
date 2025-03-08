#include<iostream>
using namespace std;
int main(){
    int i, j, n, sum = 0;
    cin >> j;
   
    for (i = 0; j > 0; i++) { 
        n = j % 10;
        j = j / 10; 
        sum += n; 
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}