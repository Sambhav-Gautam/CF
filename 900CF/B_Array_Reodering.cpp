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
    while(t--){
        int n;
        cin>>n;
        int a[n];
        rep(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int ans =0;
        rep(i,0,n-1){
            rep(j,i+1,n){
                //cout<<a[i]<<" "<<2*a[j]<<" "<< __gcd(a[i],2*a[j])<<endl;
                if( __gcd(a[i],2*a[j])>1 || (__gcd(2*a[i],a[j])>1)) ans++;
            }
        }
        cout<<ans<<endl;
    }
    // Your code here
    return 0;
}
