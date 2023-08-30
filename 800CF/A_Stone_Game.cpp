#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using cd = complex<ld>;

int findMinSteps(vector<int>& v) {
    int n = v.size();
    int maxPos = max_element(v.begin(), v.end()) - v.begin();
    int minPos = min_element(v.begin(), v.end()) - v.begin();
    return min({
        max(maxPos, minPos) + 1,
        (n - 1) - min(maxPos, minPos) + 1,
        (n - 1) - maxPos + minPos + 2,
        (n - 1) - minPos + maxPos + 2
    });
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &e : v) {
            cin >> e;
        }
        cout << findMinSteps(v) << "\n";
    }
    
    return 0;
}
