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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int min1 = INT_MAX;
        bool flag = true;
        rep(i,0,n){
            cin>>a[i];
            if(i>0){
                min1 = min(min1,a[i]-a[i-1]);
                flag = (flag & a[i]>=a[i-1]);   
            }
        }
        cout<< ((flag)?min1/2+1:0)<<endl;

    }
    // Your code here
    return 0;
}
