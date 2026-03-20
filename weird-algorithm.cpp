#include <bits/stdc++.h>
using namespace std;
int main() {
    long long num;
    cin >> num;
    // cout << num << " ";
    vector<long long> ans;
    ans.push_back(num);
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
            ans.push_back(num);
            // cout << num << " ";
        }
        else {
            num *= 3;
            num += 1;
            ans.push_back(num);
            // cout << num << " ";
        }
    }
    for (int i : ans) {
        cout << i << " ";
    }
}