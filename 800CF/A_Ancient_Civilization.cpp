#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

ll pwr(ll a, ll b) {
    ll ans = 1;
    for (int i = 1; i <= b; ++i)
        ans *= a;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, l;
        cin >> n >> l;
        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i)
            cin >> arr[i];
        ll ans = 0;
        for (ll j = 0; j < l; ++j) {
            ll zero = 0, one = 0;
            for (ll i = 0; i < n; ++i) {
                ll last_bit = arr[i] & 1;
                arr[i] = arr[i] >> 1;
                if (last_bit == 0)
                    zero++;
                else
                    one++;
            }
            if (one > zero)
                ans += (pwr(2, j));
        }
        cout << ans << endl;
    }

    return 0;
}
