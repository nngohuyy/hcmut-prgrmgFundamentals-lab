#include <iostream>
#include <cstring>

char* concatStr(char* str1, char* str2) {
    // TODO
    char* newStr = new char[strlen(str1) + strlen(str2) + 1];
    strcpy(newStr, str1);
    strcat(newStr, str2);
    return newStr;
}

int main() {
    // TODO
}