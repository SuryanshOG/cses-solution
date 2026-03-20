#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    int n = input.size();
    int ans = 1;
    int i = 0;
    while (i < n) {
        int streak = 1;
        // int current = input[i];
        while (input[i - 1] == input[i]) {
            streak++;
            i++;
            ans = max(ans, streak);
        }
        i++;
    }
    cout << ans;
}