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
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;
        x--;
        long long  col = x / n;
        long long row = x % n;
        cout << row * m + col + 1 << "\n";
    }
    return 0;
}
