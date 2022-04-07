/* 100% correct */

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void calSum(string fileName) {
    // TODO
    ifstream ifs("fileName.txt");
    if (!ifs.is_open()) {
        cout << "File does not exist." << endl;
    }
    else {
        string line;
        long long num, sum = 0;
        while (getline(ifs, line)) {
            //stringstream ss(line);
            while (ifs >> num) {
                sum += num;
            }
        }
        cout << sum << endl;
    }
    ifs.close();
}

int main() {
    return 0;
}