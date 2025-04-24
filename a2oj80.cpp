#include <bits/stdc++.h>
using namespace std;

void helper(int n, int m, char first, char second, ofstream &fout) {
    int total = n + m;
    string result;
    result.reserve(total);

    for (int i = 0; i < m; ++i) {
        result.push_back(first);
        result.push_back(second);
    }
    for (int i = 0; i < n - m; ++i) {
        result.push_back(first);
    }

    fout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Correct file names
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n, m;
    fin >> n >> m;

    if (n >= m) {
        helper(n, m, 'B', 'G', fout);
    } else {
        helper(m, n, 'G', 'B', fout);
    }

    fin.close();
    fout.close();

    return 0;
}
