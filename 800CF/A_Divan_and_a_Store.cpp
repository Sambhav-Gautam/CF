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
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        int a[n];
        vector<int> b;
        rep(i,0,n){
            cin>>a[i];
            if( a[i]>=l && a[i]<=r) b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int s1 = b.size();
        int i =0;
        int sum =0;
        int n1 =0;
        while(i<s1 && sum+b[i]<=k ){
            sum+=b[i];
            i++;
            n1++;
        }
        cout<<n1<<endl;

    }
    // Your code here
    return 0;
}
