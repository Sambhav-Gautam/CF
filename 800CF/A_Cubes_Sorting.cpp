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
        vector<int> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        bool check = true;
        rep(i,0,n-1){
            if(a[i]<=a[i+1]){
                check = false;
                break;
            }
        }
        cout<< (!check?"YES":"NO")<<endl;
    }
    // Your code here
    return 0;
}
