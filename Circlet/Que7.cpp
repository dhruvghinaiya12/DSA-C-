#include <iostream>
using namespace std;

int main() {
    int height = 5;
    int width = 5;

    for (int i = 0; i < height; i++) {
        cout << "*";
        for (int j = 1; j < width; j++) {
            if ((i == 0 || i == 2) && j < width)  
                cout << "*";
            else if (j == width - 1 && i < 3)     
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        if (i == 3) break; 
    }

    cout << "*\n"; 
    return 0;
}
