/* 50% correct */

/* 100% correct */

#include <iostream>
#include <string>

using namespace std;

bool isSymmetric(int arr[][1000], int row, int col) {
    int check = 1;
    for (int y = 0; y < row; y++) {
        for (int x = 0; x < col; x++) {
            if (arr[y][x] != arr[x][y]) {
                check = 0;
                break;
            }
        }
    }
    if (check == 1) {
        return true;
    }
    else return false;
}

int main() {
    int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);
}