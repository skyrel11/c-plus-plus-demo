#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayHeader() {
    cout << "=== SECURITY AUDIT TOOL v1.0 ===" << endl;
    cout << "Status: Active Monitoring..." << endl;
    cout << "--------------------------------" << endl;
}

bool isSecure(string pwd) {
    bool hasNum = false;
    bool isLongEnough = (pwd.length() >= 8);
    
    for(char c : pwd) {
        if(isdigit(c)) hasNum = true;
    }
    
    return hasNum && isLongEnough;
}
