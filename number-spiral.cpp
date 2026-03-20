#include <bits/stdc++.h>
using namespace std;
void solve() {
    int row, col;
    cin >> row >> col;
    int layer = max(row, col);
    if (layer % 2 == 1) swap (row, col);
    if (col == layer) cout << (long long)(layer - 1) * (layer - 1) + row << endl;
    else cout << (long long)layer * layer - col + 1 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}