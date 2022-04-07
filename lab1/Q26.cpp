/* 70% correct */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void findAllIndex(string s1, string s2) {
    // TO DO
    int isFound = -1;
    do {
        isFound = s1.find(s2, isFound + 1);
        if (isFound != -1) {
            cout << isFound << " ";
        }
    } while (isFound != -1);
}

int main() {
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "c";
    findAllIndex(s1, s2);
    return 0;
}