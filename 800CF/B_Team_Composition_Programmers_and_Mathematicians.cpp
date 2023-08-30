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
        long long n,x;
        cin>>n>>x;
        cout<< min( min(n,x),(n+x)/4)<<endl;
    }
    // Your code here
    return 0;
}
