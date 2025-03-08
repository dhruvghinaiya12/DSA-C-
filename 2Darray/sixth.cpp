#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col, i, j;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));

    // Input the matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    // Spiral traversal
    int srow = 0, erow = row - 1;
    int scol = 0, ecol = col - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol) {
        // Traverse from left to right along the top row
        for (i = scol; i <= ecol; i++) {
            ans.push_back(mat[srow][i]);
        }
        srow++;

        // Traverse from top to bottom along the right column
        for (i = srow; i <= erow; i++) {
            ans.push_back(mat[i][ecol]);
        }
        ecol--;

        // Traverse from right to left along the bottom row (if still valid)
        if (srow <= erow) {
            for (i = ecol; i >= scol; i--) {
                ans.push_back(mat[erow][i]);
            }
            erow--;
        }

        // Traverse from bottom to top along the left column (if still valid)
        if (scol <= ecol) {
            for (i = erow; i >= srow; i--) {
                ans.push_back(mat[i][scol]);
            }
            scol++;
        }
    }

    // Output the spiral order
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
