#include <iostream>
using namespace std;

void addElement(int*& arr, int n, int val, int index) {
    // TODO
    int* newArr = new int[n+1];
    newArr = arr;
    for (int i = n; i > index; i--) {
        newArr[i] = newArr[i - 1];
    }
    newArr[index] = val;
}

int main() {
    // TODO
}