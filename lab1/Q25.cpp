#include <iostream>
#include <string>

using namespace std;

void deleteWord(string s, string s1){
    //TO DO
    int isFound;
    do {
        isFound = s.find(s1, isFound + 1);
        if (isFound != -1) {
            s.erase(isFound, s1.length());
        }
    } while (isFound != -1);
    cout << s << endl;
}

int main() {
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai ";
    deleteWord(s, s1);
    return 0;
}