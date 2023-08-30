#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define fastIO() ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back

const int N = 110;
int a[N], b[N];

int main() {
    fastIO();
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            x += a[i];
            y += b[i];
        }

        if (x != y) {
            cout << "-1" << endl;
            continue;
        }

        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;
            if (a[i] < b[i]) {
                for (int j = i + 1; j < n; j++) {
                    if (a[j] > b[j]) {
                        while (a[i] < b[i] && a[j] > b[j]) {
                            a[i]++;
                            a[j]--;
                            ans.pb(make_pair(j + 1, i + 1));
                        }
                    }
                }
            } else {
                for (int j = i + 1; j < n; j++) {
                    if (a[j] < b[j]) {
                        while (a[i] > b[i] && a[j] < b[j]) {
                            a[i]--;
                            a[j]++;
                            ans.pb(make_pair(i + 1, j + 1));
                        }
                    }
                }
            }
        }

        cout << ans.size() << endl;
        for (auto p : ans) cout << p.first << " " << p.second << endl;
    }
    return 0;
}
