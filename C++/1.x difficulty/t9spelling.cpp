#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Use cin.ignore() og getline(cin,line) når en hel linje (som kan inneholde mellomrom) skal leses inn
*/


int main() {
    int n;
    cin >> n;
    vector<string> keypad = {
        "2", "22", "222",
        "3", "33", "333", 
        "4", "44", "444",
        "5", "55", "555",
        "6", "66", "666",
        "7", "77", "777", "7777",
        "8", "88", "888",
        "9", "99", "999", "9999", 
        "0"
        };
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string message;
        getline(cin,message);
        int prev = 0;
        cout << "Case #" << i+1 << ": ";
        for (char const &s: message) {
            if (s != ' ') {
                if (keypad[prev][0] == keypad[s-'a'][0]) {
                    cout << " ";
                }
                cout << keypad[s-'a'];
                prev = s-'a';
            } else if (s == ' ' && prev == 26) {
                cout << " 0";
            } else {
                cout << "0";
                prev = 26;
            }
        }
        cout << endl;
    }
}