#include <iostream>


using namespace std;


int main() {
    int x1, y1, x2, y2, gas, dist;
    cin >> x1 >> y1 >> x2 >> y2 >> gas;
    dist = abs(x2-x1) + abs(y2-y1);
    gas -= dist;
    /*
    - If we have less gas than the distance between intersections, we print "N".

    - If both distance and gas are odd or even, and we have enough gas to get to the intersection,
      we can keep going back and forth, because the remaining gas will be divisible by 2.

    - If one is even and the other is odd, we can't go back and forth, and will not reach the destination
    */
    if (gas < 0) {
        cout << "N" << endl;
    } else if (gas % 2 == 0) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }
}