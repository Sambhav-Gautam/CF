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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++) {
            b[i] = -11; // Initialize the entire array with -11.
        }

        int i = 0;
        int j = 0;
        while (j < n && i < n) {
            b[j] = a[i];
            j += 2;
            i++;
        }
        int k = n - 1;
        while (k >= 0 && i < n) {
            if (b[k] == -11) {
                b[k] = a[i];
                k--;
                i++;
            }
            else {
                k--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
