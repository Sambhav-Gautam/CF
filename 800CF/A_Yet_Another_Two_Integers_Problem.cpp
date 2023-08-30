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
        long long a, b;
        cin >> a >> b;
        long long count = 0;

            while (a != b) {
                long long diff = abs(b - a);
                if (diff >= 10) {
                    // Multiply a by 10 until it becomes greater than or equal to b
                    while (a < b) {
                        a += 10;
                        count++;
                    }
                    a-=10;
                } else {
                    // Add the difference directly to a
                    a += diff;
                    count++;
                }
            }
            cout << count << endl;

    }
    return 0;
}
