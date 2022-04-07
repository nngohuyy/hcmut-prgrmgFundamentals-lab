#include <iostream>
using namespace std;

bool isPalindrome(const char* str) {
    // Write your code here
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const char* str = "abba";
    cout << isPalindrome(str);
    return 0;
}