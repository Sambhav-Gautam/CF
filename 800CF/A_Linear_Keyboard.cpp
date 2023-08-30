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
        
        string s;
        cin>>s;
        int n = s.length();
        int sum =0;
        for(int  i=1;i<n;i++){
            sum+= abs((s[i-1]-'a')-(s[i]-'a'));
        }
        cout<<sum<<endl;
    }
    // Your code here
    return 0;
}
