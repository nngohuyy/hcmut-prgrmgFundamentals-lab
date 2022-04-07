#include <iostream>

using namespace std;
// implement calculate factorial function in here
long factorial(int n) {
    long fact = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
    else return 1;
}


int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = factorial(N);

    cout << result << endl;
    return 0;
}