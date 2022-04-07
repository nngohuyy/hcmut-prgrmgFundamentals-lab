#include <iostream>
#include <string>

using namespace std;

void cutString(string s, int index) {
    // TO DO
    int length = s.length();
    if (index >= length) {
        cout << "" << endl;
    }
    else cout << s.substr(index) << endl;
}
int main() {
    string s = "Truong Dai Hoc Bach Khoa.";
    cutString(s, 7);
}