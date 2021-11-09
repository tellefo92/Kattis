#include <iostream>

using namespace std;

int main() {
    int x;
    double ans = 0;
    cin >> x;
    for(int i=0; i < x; i++) {
        double qol;
        double years;
        cin >> qol >> years;
        ans += qol * years;
    }
    cout << ans << endl;
    return 0;
}