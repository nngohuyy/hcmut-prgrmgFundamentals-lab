#include <iostream>
#include <string>

using namespace std;

int ascendingRows(int arr[][1000], int row, int col) {
    int count = 0;
    int compare = 0;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col - 1; c++) {
            if (arr[r][c] < arr[r][c + 1]) {
                compare++;
            }
            else break; // to save time
        }
        if (compare == col - 1) { // number of comparisons equals to (col - 1)
            count++;
        }
        compare = 0; // reset compare
    }
    return count;
}

int main() {
    int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
    cout << ascendingRows(arr,3,3);
    return 0;
}