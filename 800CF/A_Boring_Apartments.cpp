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
        int i=1;
        int count =1;
        int ans = 0;
        while(i<n && count!=n){
            count = i;
            int  j=1;
            while(j<5 ){
                ans+=j;
                if(count ==n) break;
                count  = count*10 + i;
                j++;
            }
            
            i++;
        }
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<11<<endl;
        else cout<<ans<<endl;
    }
    // Your code here
    return 0;
}
