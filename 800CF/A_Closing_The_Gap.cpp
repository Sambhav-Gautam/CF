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
        int sum =0;
        rep(i,0,n){
            cin>>a[i];
            sum +=a[i];

        }
        if(sum%n==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    // Your code here
    return 0;
}
