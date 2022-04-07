#include <iostream>

using namespace std;

bool completeNum(int N) {
    // TODO
    int sum = 0;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }
    if (N == sum) {
        return true;
    }
    else return false;
}

int main() {
    return 0;
}