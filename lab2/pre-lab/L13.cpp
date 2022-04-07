#include <iostream>

using namespace std;

int findMax(int *vals, int numEls) {
    // TODO
    int max = vals[0];
    for (int i = 0; i < numEls; i++) {
        if (vals[i] > max) {
            max = vals[i];
        }
    }
    return max;
}

int main() {
    int numEls;
    cin >> numEls;
    int vals[numEls];
    for (int i = 0; i < numEls; i++) {
        cin >> vals[i];
    }
    cout << findMax(vals, numEls) << endl;
    return 0;
}