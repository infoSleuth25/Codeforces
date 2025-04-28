#include <iostream>
#include <cstdlib>  // for abs()
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int l = abs(x) + abs(y); // l is the sum of absolute values

    int x1, y1, x2, y2;

    // Depending on the quadrant
    if (x > 0 && y > 0) {
        x1 = 0; y1 = l;
        x2 = l; y2 = 0;
    }
    else if (x < 0 && y > 0) {
        x1 = 0; y1 = l;
        x2 = -l; y2 = 0;
    }
    else if (x < 0 && y < 0) {
        x1 = 0; y1 = -l;
        x2 = -l; y2 = 0;
    }
    else if (x > 0 && y < 0) {
        x1 = 0; y1 = -l;
        x2 = l; y2 = 0;
    }

    // Ensure x1 < x2
    if (x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;

    return 0;
}
