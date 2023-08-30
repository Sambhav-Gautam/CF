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
        int l,r;
        cin>>l>>r;
        int a = r/2 +1;
        if(a<l) cout<< r% (l)<<endl;
        else if(a>=l) cout<< r%a <<endl;
    }
    // Your code here
    return 0;
}
