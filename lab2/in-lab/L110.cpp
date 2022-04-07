#include <iostream>
using namespace std;

void encrypt(char* text, int shift) {
    // Write your code
    if (shift < 0) {
        shift = -((-shift) % 26);
        shift += 26;
    }
    else
        if (shift >= 26) {
            shift %= 26;
        }
    int i = 0;
    while (text[i] != '\0') {
        int temp = text[i] + shift;
        if (text[i] <= 'z' && temp > 'z' || text[i] <= 'Z' && temp > 'Z') {
            temp -= 26;
        }
        text[i] = temp;
        i++;
    }
}

void decrypt(char* text, int shift) {
    // Write your code
    encrypt(text, -shift); 
}

int main() {
    int n, shift; 
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;

    encrypt(text, shift);
    cout << text << '\n';
    decrypt(text, shift);
    cout << text;

    delete[] text;
    return 0;
}