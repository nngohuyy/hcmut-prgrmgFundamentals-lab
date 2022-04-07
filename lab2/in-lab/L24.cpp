#include <iostream>
using namespace std;

int recursiveSearch(int& n , int m, int arr[], int index) {
    // Implement function content here
    if (arr[index] == m) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        return index;
    }
    else
        if (index > n) {
            return -1;
        }
        else return recursiveSearch(n, m, arr, index + 1);
}

int main() {
    // something in here i don't know
    return 0;
}