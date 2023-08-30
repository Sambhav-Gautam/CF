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
    // Your code here
    int n; cin >> n;
    string s[n-2];
    string ans = "";
    for(int i=0; i<n-2; i++){
        cin >> s[i];
        if(!i){
            ans+=s[i][0];
        }
        else if(s[i][0]!=s[i-1][1]){
            ans+=s[i-1][1];
            ans+=s[i][0];
        }
        else{
            ans+=s[i][0];
        }
    }
    while(ans.length()!=n){
        ans+=s[n-3][1];
    }
    cout << ans << '\n';
    }
    return 0;
}
