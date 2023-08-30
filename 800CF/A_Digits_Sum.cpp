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
        long long n;
        cin>>n;
        if(n<9) cout<<0<<endl;
        else if(n<=10 && n>=9) cout<<1<<endl;
        else cout<<(n+1)/10<<endl;

    }
    // Your code here
    return 0;
}
