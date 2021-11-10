#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


int main() {
    int n;
    int counter = 0;
    while (cin >> n && n != 0) {
        counter++;
        cout << "List " << counter << ":" << endl;
        cin.ignore();
        map<string, int> animals;
        for (int i = 0; i < n; i++) {
            string animal;
            getline(cin, animal);
            size_t space = animal.rfind(" ");
            if (space != -1) {
                animal = animal.substr(space+1, animal.length()-space);
            }
            transform(animal.begin(), animal.end(), animal.begin(), ::tolower);
            if (animals.count(animal) > 0) {
                animals[animal]++;
            } else {
                animals[animal] = 1;
            }
        }
        for (auto& it: animals) {
            cout << it.first << " | " << it.second << endl;
        }
    }
    return 0;
}