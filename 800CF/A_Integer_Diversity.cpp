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
        int n;
        cin >> n;
        int arr[n];
        int ar[100001] = {0};
        int count = 0;
        bool hasZero = false;  // To keep track if 0 has been encountered
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i] = abs(arr[i]);
            if (arr[i] == 0 && !hasZero) {  // Check if arr[i] is 0 and hasZero flag is false
                count++;
                hasZero = true;  // Set the flag to true, so it won't be counted again
            }
            else if (ar[arr[i]] < 2 && arr[i]!=0) {
                count++;
                ar[arr[i]]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
