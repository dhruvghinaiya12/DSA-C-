#include <iostream>
using namespace std;

int main() {
    int space = 8;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) cout << j;
        for (int s = 1; s <= space; s++) cout << " ";
        for (int j = i; j >= 1; j--) cout << j;
        cout << endl;
        space -= 2;
    }
    return 0;
}
