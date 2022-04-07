/*  100% correct  */

#include <iostream>
#include <cstring>

using namespace std;

int calc(char str[]) {
    // TODO
    int length = strlen(str);
    int base = 1;
    int dec = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == '1') {
            dec += base;
        }
        base *= 2;
    }
    return dec;
}

int main() {
    char str[] = "001011" ;
    cout << calc(str);
    return 0;
}