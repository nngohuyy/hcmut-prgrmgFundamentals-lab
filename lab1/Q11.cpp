/* 0% correct */

#include <iostream>
#include <cstring>

using namespace std;

void process(char str[], char outstr[]) {
    // TODO
   
}
int main() {
    char str[] = "  abc  def  ghi  " ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}