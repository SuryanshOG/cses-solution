#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a,b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && 2 * min(a,b) >= max(a,b)) cout << "YES" << endl;
    else cout << "NO" <<endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}