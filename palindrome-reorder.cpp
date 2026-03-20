#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    int oddCount = 0;
    int oddIndex = -1;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string half = "";
    for (int i = 0; i < 26; i++) {
        half += string(freq[i] / 2, char('A' + i));
    }

    string mid = "";
    if (oddIndex != -1) {
        mid = string(1, char('A' + oddIndex));  // fixed
    }

    string rev = half;
    reverse(rev.begin(), rev.end());

    cout << half + mid + rev << "\n";
}