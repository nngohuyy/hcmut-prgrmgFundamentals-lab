/* 100% correct */

#include <iostream>
#include <string>

using namespace std;

int diagonalProduct(int arr[][1000], int row, int col) {
    unsigned int product = 1;
    for (int x = 0; x < col; x++) {
        product *= arr[x][x];
    }
    return product;
}

int main() {
    int arr[][1000] = {{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
    cout << diagonalProduct(arr,3,3);
}