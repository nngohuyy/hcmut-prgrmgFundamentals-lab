#include <iostream>
using namespace std;

bool checkElementsUniqueness(int* arr, int n) {
    // Write your code
    int flag = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0) {
        return false;
    }
    else return true;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;
    return 0;
}