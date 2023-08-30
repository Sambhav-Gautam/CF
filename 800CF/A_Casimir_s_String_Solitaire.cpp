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
        string ab;
        cin >> ab;
        int n = ab.length();
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++) {
            if (ab[i] == 'A')
                a++;
            else if (ab[i] == 'B')
                b++;
            else if (ab[i] == 'C')
                c++;
        }
        if (a+c == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
