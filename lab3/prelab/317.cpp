#include <iostream>
using namespace std;

void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // TODO
    // matrix[r+1][c];
    // for (int i = r; i > row; i--) {
    //     for (int j = 0; j < c; i++) {
    //         matrix[i+1][j] = matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < c; i++) {
    //     matrix[row][i] = rowArr[i];
    // }
    for (int i = r; i > row; i--) {
        *(matrix+i) = *(matrix+i-1);
    }
    *(matrix+row) = rowArr;
}

int main() {
    // TODO
}