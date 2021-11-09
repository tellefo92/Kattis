#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    double whitespace, lower, upper, symbols, total;
    whitespace, lower, upper, symbols, total = 0;   
    for (char const &a: s) {
        int c = a;
        total++;
        if (c == 95) {
            whitespace++;
        } else if (97 <= c && c <= 122) {
            lower++;
        } else if (65 <= c && c<= 90) {
            upper++;
        } else {
            symbols++;
        }
    }
    cout.precision(10);
    cout << whitespace/total << "\n";
    cout << lower/total << "\n";
    cout << upper/total << "\n";
    cout << symbols/total << endl;
}