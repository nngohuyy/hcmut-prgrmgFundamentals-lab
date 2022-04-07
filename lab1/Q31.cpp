/* 100% correct */

#include <iostream>
#include <climits>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col) {
    int sum = 0;
    int position;
    for (int y = 0; y < row; y++) {
        sum += arr[y][0];
    }
    for (int x = 0; x < col; x++) {
        int tempSum = 0;
        for (int y = 0; y < row; y++) {
            tempSum += arr[y][x];
        }
        if (tempSum > sum) {
            sum = tempSum;
            position = x;
        }
    }
    return position;
}

int main() {
    int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr, 2, 5);
}