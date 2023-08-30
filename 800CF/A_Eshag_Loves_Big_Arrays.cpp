#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int qq;
    cin >> qq;
    while (qq--) {
        int n, mn, ans;
        cin >> n, mn = 1000000, ans = 0;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i], mn = min(mn, a[i]);
        for (int i = 0; i < n; ++i)
            ans += a[i] != mn;
        cout << ans << endl;
    }

    return 0;
}
