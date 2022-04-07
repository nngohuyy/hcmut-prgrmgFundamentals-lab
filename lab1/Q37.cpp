/* 100% correct */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int d1 = 0, d2 = 0, i = x, j = y;
    while(i < row && j < col) {
        d1 += arr[i][j]; // cộng xuống
        i++;
        j++;
    }
    i = x - 1, j = y - 1;
    while(i >= 0 && j >= 0) {
        d1 += arr[i][j]; // cộng lên
        i--;
        j--;
    }
    i = x; j = y;
    while(i >= 0 && j < col) {
        d2 += arr[i][j]; // cộng xuống
        i--;
        j++;
    }
    i = x + 1; j = y - 1;
    while(i < row && j >= 0) {
        d2 += arr[i][j]; // cộng lên
        i++;
        j--;
    }
    if(d1 > d2) {
        return (d1 - d2);
    }
    else return (d2 - d1);
}

int main() {
    int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    /*
        55 85   47   58
        31 04 >>60<< 67
        95 69   71   73
        51 62   64   90

        d1 = 60 + 85 + 73 = 218
        d2 = 58 + 60 + 69 + 51 = 238
        >> abs(d1 - d2) = 20
    */
    cout << diagonalDiff(arr,4,4,1,2);
    return 0;
}