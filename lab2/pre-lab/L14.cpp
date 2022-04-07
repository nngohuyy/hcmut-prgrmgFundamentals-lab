#include <iostream>

using namespace std;

void sum2(int *array, int numEls, int &result) {
    // TODO
    result = 0;
    for (int i = 0; i < numEls; i++) {
        result += array[i];
    }
}

int main() {
    int numEls, result;
    cin >> numEls;
    int array[numEls];
    for (int i = 0; i < numEls; i++) {
        cin >> array[i];
    }
    sum2(array, numEls, result);
    cout << result << endl;
    return 0;
}