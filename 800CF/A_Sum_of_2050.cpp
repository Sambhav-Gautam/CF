#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Check if n is divisible by 2050
        if (n % 2050 != 0) {
            cout << -1 << "\n";
            continue;
        }

        // Count the sum of digits of n / 2050
        long long q = n / 2050;
        long long count = 0;

        while (q > 0) {
            count += q % 10;
            q /= 10;
        }

        cout << count << "\n";
    }

    return 0;
}
