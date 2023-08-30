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
        int a[n];
        int b[n];

        rep(i,0,n){
            cin>>a[i];
            
        }
        rep(i,0,n){
            cin>>b[i];
        }
        rep(i,0,n){
            if(a[i]>b[i]){
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        int mx=-100000;
        rep(i,0,n){
            
            mx = max(mx,a[i]);
        }
        int mx1 =-10000;
        rep(i,0,n){
            mx1 = max(mx1,b[i]);
        }
        cout<<mx*mx1<<endl;
    }
    // Your code here
    return 0;
}
