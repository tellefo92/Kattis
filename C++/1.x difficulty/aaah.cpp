#include <iostream>
#include <string>

using namespace std;

int main() {
    string jm;
    string doctor;
    cin >> jm >> doctor;
    if(jm.size() >= doctor.size()) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }
}