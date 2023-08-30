#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t;
    cin >> t;
    rep(ui, 0, t) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> aux(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            aux[i]=arr[i];
        }
        sort(arr.begin(), arr.end());

        // Check if the parities match
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if ( ((arr[j] % 2 == 0 && aux[j] % 2 == 0) || (arr[j] % 2 != 0 && aux[j] % 2 != 0) ) ){
                continue;
            } else {
                flag = false;
                break;
            }
        }
        if(n==1) cout<<"YES"<<endl;
        else{ 
        cout << ((flag && n>1) ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
