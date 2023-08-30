#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <strings.h>
#include <string.h>
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
        int st = s[0];
        string op = "";
        string op2 = "";
        
        int n = s.length();
        for(int i=0;i<n/2;i++){
            op+=s[i];
        }
        for(int i=n/2;i<n;i++){
            op2+=s[i];
        }
        if(op==op2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    // Your code here
    return 0;
}
