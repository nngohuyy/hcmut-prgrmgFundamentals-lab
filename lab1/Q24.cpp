#include <iostream>
#include <string>

using namespace std;

void replaceString(string s, string s1, string s2){
    //TO DO
    int index, isFound, isFoundMax = -1;
    int i = 0;
    do {
        isFound = s.find(s1, isFound + 1);
        if (isFound != -1) {
            if (isFound > isFoundMax) {
                isFoundMax = isFound;
            }
        }
    } while (isFound != -1);

    while(s.find(s1) != string::npos) {
        s.replace(isFoundMax, s2.length(), s2);
        break;
    }
    cout << s << endl;
}

int main() {
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong";
    replaceString(s, s1, s2);
    return 0;
}