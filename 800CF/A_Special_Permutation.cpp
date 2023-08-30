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
    rep(i, 0, t) {
        int n;
        cin >> n;

        if (n & 1) {
            vector<int> a;
            int index = n / 2;

            for (int i = n-1; i >= 0; i--) {
                a.push_back(i+1);
            }
            swap(a[index], a[index - 1]);
            for (auto& val : a) {
                cout << val << " ";
            }
            cout << endl;
        } else {
            vector<int> a;
            for (int i = n-1; i >=0; i--) {
                a.push_back(i+1);
            }
            for (auto& val : a) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    // Your code here
    return 0;
}
