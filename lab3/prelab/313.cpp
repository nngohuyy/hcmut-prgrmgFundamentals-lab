#include <iostream>
using namespace std;

int** deepCopy(int** matrix, int r, int c) {
    // TODO
    if (r <= 0 || c <= 0) {
        return nullptr;
    }
    else return matrix;
}

int main() {
    int** m = new int*[2];
    m[0] = new int[2]; m[0][0] = 1; m[0][1] = 2;
    m[1] = new int[2]; m[1][0] = 1; m[1][1] = 3;
    int** n = deepCopy(m, 2, 2);
    cout << n[0][0] << ' ' << n[0][1] << '\n' << n[1][0] << ' ' << n[1][1];
    return 0;
}