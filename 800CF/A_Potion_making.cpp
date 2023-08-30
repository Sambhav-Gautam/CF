#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "100" << endl;
            continue;
        }
        int m = 100 - n;
        int ans = __gcd(n, m);
        while (n % ans == 0 && m % ans == 0 && ans!=1) {
            n /= ans;
            m /= ans;
            ans = __gcd(n, m);
        }
        cout << n + m << endl;
    }
    return 0;
}
