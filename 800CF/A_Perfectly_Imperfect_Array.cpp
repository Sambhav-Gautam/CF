#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

bool isPerfectSquare(long long num) {
    long long sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

int main() {
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        rep(i,0,n){
            cin>>a[i];
            
        }
        bool flag = false;
        rep(i,0,n){
            if(!isPerfectSquare(a[i])){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;

    }
    // Your code here
    return 0;
}
