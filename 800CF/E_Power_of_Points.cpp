#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Fenwick tree implementation
class FenwickTree {
public:
    FenwickTree(int n) : tree(n + 1, 0) {}

    void update(int idx, int val) {
        while (idx < tree.size()) {
            tree[idx] += val;
            idx += (idx & -idx);
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }

private:
    vector<int> tree;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        // Create the Fenwick tree with maximum possible value of x
        FenwickTree ft(1000000000);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ft.query(x[i]);
            ft.update(x[i], 1);
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
