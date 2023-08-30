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
        int n;
        cin >> n;
        string s = to_string(n);
        int evens = 0;
        for (int i = 0; i < s.length(); i++) {
            int n1 = s[i] - '0'; // Convert character to integer
            if (n1 % 2 == 0) evens++;
        }

        int s2 = s[0] - '0'; // Convert character to integer
        if (evens == 0) cout << -1 << endl;
        else if (n % 2 == 0) cout << 0 << endl;
        else if (s2 % 2 == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
