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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        vector<int> cnt(32,0);
        rep(i,0,n){
            int b = __builtin_clz(a[i]);
            cnt[b ] +=1;
        }
        long long ans =0;
        rep(b,0,32){
            ans+= (long long) cnt[b]*(cnt[b]-1)/2;
        }
        cout<<ans<<endl;
    }
    // Your code here
    return 0;
}
