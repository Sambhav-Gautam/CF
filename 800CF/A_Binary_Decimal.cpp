#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t;
    cin >> t;
    rep(ii, 0, t) {
        long long n;
        cin >> n;
        int mx = 0;
        while (n != 0) {
            mx = max(mx, static_cast<int>(n % 10));
            n /= 10;
        }
        cout << mx << endl;
    }
    return 0;
}
