#include <iostream>

using namespace std;

int main() {
    int n;
    string slats;
    int tb = 0;
    int lr = 0;
    int sw = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> slats;
        int j = 0;
        for (char const &c: slats) {
            int a = c;
            if (a == 49) {
                j++;
                continue;
            } else {
                if (j > 1) {
                    lr++;
                } else {
                    tb++;
                }
                j++;
            }
        }
    }
    while (tb > 1 && lr > 1) {
        sw++;
        tb -= 2;
        lr -= 2;
    }
    cout << sw << " " << tb << " " << lr << endl;
}