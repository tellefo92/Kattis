#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int counter = 0;
    while (cin >> n && n != 0) {
        counter++;
        vector<string> names;
        for (int i = 0; i < n; i++) {
            string name;
            cin >> name;
            names.push_back(name);
        }
        cout << "SET " << counter << endl;

        if (n % 2 == 1) {
            for (int i = 0; i < n; i += 2) {
                cout << names[i] << endl;
            }
            for (int i = n - 2; i > 0; i -= 2) {
                cout << names[i] << endl;
            }
        } else {
            for (int i = 0; i < n; i += 2) {
                cout << names[i] << endl;
            }
            for (int i = n - 1; i > 0; i -= 2) {
                cout << names[i] << endl;
            }
        }
    }
}