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
    cin>>t;
    rep(ii,0,t){
        int n;
        cin>>n;
        int arr[n];
        int mx = -10000;
        int mn = 1000000;
        rep(i,0,n){
            cin>>arr[i];
            mx = max(mx,arr[i]);
            mn = min(mn,arr[i]);
        }
        cout<<mx-mn<<endl;
    }
    // Your code here
    return 0;
}
