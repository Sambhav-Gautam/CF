#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve() {
    int n;
    cin >> n;
    string input_str, result_str;
    cin >> input_str;
    for (int i = 0; i < n; i++) {
        if (input_str[i] == 'U') {
            result_str += 'D';
        } else if (input_str[i] == 'D') {
            result_str += 'U';
        } else {
            result_str += "LR";
            i++;
        }
    }
    cout << result_str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        solve();
        cout << endl;
    }
}
