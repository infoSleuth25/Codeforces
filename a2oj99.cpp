#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> bottles(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> bottles[i].first >> bottles[i].second; // (a[i], b[i])
    }
    
    vector<bool> canBeOpened(n, false); // Initially, no bottle is opened
    
    for (int i = 0; i < n; ++i) {           // bottle i is opener
        for (int j = 0; j < n; ++j) {       // bottle j is the target bottle
            if (i == j) continue;           // skip same bottle
            if (bottles[i].second == bottles[j].first) {
                canBeOpened[j] = true;       // i-th bottle can open j-th bottle
            }
        }
    }
    
    int countUnopened = 0;
    for (int i = 0; i < n; ++i) {
        if (!canBeOpened[i]) {
            countUnopened++;
        }
    }
    
    cout << countUnopened << endl;
    return 0;
}
