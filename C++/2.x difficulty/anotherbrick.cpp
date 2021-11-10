#include <iostream>

using namespace std;

int main() {
    int h, w, n, b;
    cin >> h >> w >> n;
    int cur_width = 0;
    for (int i=0; i<n; i++) {
        cin >> b;
        cur_width += b;
        if (cur_width > w) {
            cout << "NO" << endl;
            return 0;
        } 
        if (cur_width == w) {
            h--;
            cur_width = 0;
        }
        if (h == 0) {
            break;
        }
    }
    if (h == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}