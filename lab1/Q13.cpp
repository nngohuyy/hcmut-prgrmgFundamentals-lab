#include <iostream>
#include <cstring>

using namespace std;

bool isValidChar(char a) {
    if (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')))
        return true;
    else return false;
}

void capitalize(char b) {
    if ((b >= 'a') && (b <= 'z')) {
        b = toupper(b);
    }
}

void deCapitalize(char c) {
    if ((c >= 'A') && (c <= 'Z')) {
        c = tolower(c);
    }
}

void erase(char str[], int a)
{
    int l = strlen((char*)str);
    for (int i = a; i < l; i++) str[i] = str[i + 1];
	str[l - 1] = '\0';
}

void process(const char *name, char *outstr) {
    int length = strlen((char*)name);
    for (int i = 0; i < length; i++) {
        if (isValidChar(name[i])) {
            if (i == 0) {
                capitalize(name[i]);
            }
            else
                if (name[i - 1] == ' ') {
                    capitalize(name[i]);
                }
                else
                    if (name[i] >= 'a' && name[i] <= 'z') {
                        deCapitalize(name[i]);
                    }
        }
        else
            if (name[i] != ' ') {
                erase((char*)name, i);
            }
    }

    length = strlen((char*)name);
    for (int i = 0; i < length; i++) {
        outstr[i] = name[i];
    }
    outstr[length]='\0';
}

int main() {
    char str[] = "doAn VAN *(()hau @!#$" ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}