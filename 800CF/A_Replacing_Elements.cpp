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
        int n, k;
        cin>>n>>k;
        int a[n];
        bool flag = false;
        int c =0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i]>k) flag = true;
            if(a[i]>k) c++;
        }
        sort(a,a+n);
        cout<<((a[0]+a[1]<=k || a[n-1]<=k)?"YES":"NO")<<endl;
    }
    // Your code here
    return 0;
}
