#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> anseven;
    vector<int> ansodd;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) anseven.push_back(i);
        else ansodd.push_back(i);
    }
    for (int i : anseven) {
        cout << i << " ";
    }
    for (int i : ansodd) {
        cout << i << " ";
    }
}