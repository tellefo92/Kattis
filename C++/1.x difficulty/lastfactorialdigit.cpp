#include <iostream>

using namespace std;

int factorial(int N) {
    int prod = 1;
    for (int i=N; i>0; i--) {
        prod *= i;
    }
    return prod;
}

int main() {
    int T, N;
    cin >> T;
    for (int i=0; i<T; i++) {
        cin >> N;
        int fac = factorial(N);
        string s = to_string(fac);
        cout << s.back() << endl;
    }
    return 0;
}