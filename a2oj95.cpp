#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> elements;
    for (int i = 0; i < n * m; ++i) {
        int val;
        cin >> val;
        elements.push_back(val);
    }

    // Check if all elements can be made equal
    int mod = elements[0] % d;
    for (int val : elements) {
             bif (val % d != mod) {
            cout << -1 << endl;
            return 0;
        }
    }

    // Convert all elements to the same "scale" to simplify math
    for (int& val : elements) {
        val /= d;
    }

    sort(elements.begin(), elements.end());
    int median = elements[elements.size() / 2];

    long long total_moves = 0;
    for (int val : elements) {
        total_moves += abs(val - median);
    }

    cout << total_moves << endl;
    return 0;
}
