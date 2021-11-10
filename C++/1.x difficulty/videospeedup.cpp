#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, p, k;
    cin >> n >> p >> k;
    int t;
    double time = 0;
    double speed = 1;
    int time_stamp = 0;
    for (int i=0; i<n; i++) {
        cin >> t;
        time += (t - time_stamp) * speed;
        speed += (double)(p/100.0);
        time_stamp = t;
    }
    time += (k - time_stamp) * speed;
    cout << setprecision(6) << fixed << time << endl;
}