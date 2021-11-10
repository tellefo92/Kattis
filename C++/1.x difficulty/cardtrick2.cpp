#include <iostream>
#include <deque>

using namespace std;

int main() {
    int T;
    cin >> T;
    int n;
    for (int i = 0; i<T; i++) {
        cin >> n;
        deque<int> seq;
        for (n; n > 0; n--) {
            seq.push_front(n);
            for (int j = 0; j < n; j++) {
                int last = seq.back();
                seq.pop_back();
                seq.push_front(last);
            }
        }
        for (auto it = seq.begin(); it != seq.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
