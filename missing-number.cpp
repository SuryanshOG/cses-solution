#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    ll got = 0;
    for (ll i = 1; i < n; i++) {
        ll temp;
        cin >> temp;
        got += temp;
    }
    cout << total - got;
}
