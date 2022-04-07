#include <iostream>
#include <string>
using namespace std;

struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};

string convertToString(SCP obj) {
    // Student answer
    string str = "Item #: SCP-";
    if (obj.id < 10) str += "00" + to_string(obj.id);
    if (obj.id >= 10 && obj.id < 100) str += "0" + to_string(obj.id);
    if (obj.id > 100) str += to_string(obj.id);
    str += "\nObject Class: ";
    if (obj.objClass == 0) str += "Safe";
    if (obj.objClass == 1) str += "Euclid";
    if (obj.objClass == 2) str += "Keter";
    str += "\nSpecial Containment Procedures: " + obj.speConProcedures;
    str += "\nDescription: " + obj.description + "\n";
    for (int i = 0; i < obj.numAddendums; i++) {
        str += obj.addendums[i] + "\n";
    }
    return str;
}

int main() {
    string* addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP obj {55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    cout << convertToString(obj);

    delete [] addendums;
}