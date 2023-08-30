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
        if(n%7==0) cout<<n<<endl;
        else{
            int ans =-1;
            rep(i,0,10){
                if((n - n%10 +i)%7==0){
                    ans = n - n%10 +i;
                }
            }
            cout<<ans<<endl;
        }
    }
    // Your code here
    return 0;
}
