#include <bits/stdc++.h>
using namespace std;
long long calculator(long long num) {
    long long ans = (num * num * ((num * num) - 1)) / 2 - (4 * (num - 1) * (num - 2));
    return ans;
}
int main() {
    int n;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cout << calculator(i) << endl;
    }
}