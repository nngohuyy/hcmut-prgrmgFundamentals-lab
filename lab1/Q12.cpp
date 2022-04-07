/* 45% correct */

#include <iostream>
#include <cstring>

using namespace std;

void process(const char *str, char *outstr) {
    // TODO
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        outstr[i] = str[length - i - 1];
    }
    int outstrlength = strlen(outstr);
    outstr[length + 1] = '\0';
}

int main() {
    char str[] = "this is my school" ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}