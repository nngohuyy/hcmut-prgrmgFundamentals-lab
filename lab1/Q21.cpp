#include <iostream>
#include <string>

using namespace std;

int max(int ans, int temp) {
    if (ans > temp) {
        return ans;
    }
    else return temp;
}

int main()  {
    // TODO
    int ans = 1, temp = 1;
    string s;
    getline(cin, s);
    int length = s.length();
    for (int i = 0; i < length - 1; i++) {
        if (s[i] == s[i + 1]) {
            temp++;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    cout << ans << endl;
    return 0;
}