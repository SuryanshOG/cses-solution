#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main() {
    int n;
    cin >> n;
    long base = 2;
    long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (base * result) % mod;
        }
        base = (base * base) % mod;
        n /= 2;
    }
    cout << result << endl;
    return 0;
}