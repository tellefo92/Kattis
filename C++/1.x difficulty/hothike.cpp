#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> temps(n);
    for (int i=0;i<n;i++) {
        cin >> temps[i];
    }
    int hottest = 1000;
    int best_day = 0;
    for (int i=2; i<n; i++) {
        if (hottest > max(temps[i], temps[i-2])) {
            hottest = max(temps[i], temps[i-2]);
            best_day = i-1;
        }
    } 
    cout << best_day << " " << hottest << endl;
}