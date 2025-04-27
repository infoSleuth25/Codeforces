#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Prefix sum for original array
    vector<long long> prefixA(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixA[i + 1] = prefixA[i] + a[i];
    }

    // Sorted copy
    vector<int> b = a;
    sort(b.begin(), b.end()); 

    // Prefix sum for sorted array
    vector<long long> prefixB(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixB[i + 1] = prefixB[i] + b[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << prefixA[r] - prefixA[l - 1] << endl;
        } else {
            cout << prefixB[r] - prefixB[l - 1] << endl;
        }
    }

    return 0;
}
