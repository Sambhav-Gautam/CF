#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
    int n; 
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        ans = max(ans, k - i);
    }
    cout << ans << '\n';
    }
    // Your code here
    return 0;
}
