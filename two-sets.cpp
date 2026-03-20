#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> set1;
    vector<int> set2;
    if (n % 4 != 0 && n % 4 != 3) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    int l, r;
    if (n % 4 == 3) {
        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);
        l = 4;
    } else {
        l = 1;
    }
    r = n;
    while (l < r) {
        set1.push_back(l);
        set1.push_back(r);
        set2.push_back(l + 1);
        set2.push_back(r - 1);
        l += 2;
        r -= 2;
    }
    cout << set1.size() << endl;
    for (int i : set1) {
        cout << i << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (int i : set2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}