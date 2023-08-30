#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        auto f = [](int best, int other1, int other2) {
            return max(0, max(other1, other2) + 1 - best);
        };

        int add_a = f(a, b, c);
        int add_b = f(b, a, c);
        int add_c = f(c, a, b);

        cout << add_a << ' ' << add_b << ' ' << add_c << '\n';
    }

    return 0;
}
