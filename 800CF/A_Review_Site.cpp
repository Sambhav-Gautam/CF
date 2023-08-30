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
        int sum=0;
        rep(i,0,n){
            int a;
            cin>>a;
            if(a==1 || a == 3) sum ++;
        }
        cout<<sum<<endl;
    }
    // Your code here
    return 0;
}
