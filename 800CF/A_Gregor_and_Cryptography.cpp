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
    rep(o,0,t){
        int n;
        cin>>n;
        int ans;
        for(int i=2;i<n;i++){
            if(n%i==1){ans=i;break;} 
        }
        if(n/ans!= ans) n =n/ans;
        else n-= (n%ans);
        cout<<ans<<" "<<(n)<<endl;
    }
    // Your code here
    return 0;
}
