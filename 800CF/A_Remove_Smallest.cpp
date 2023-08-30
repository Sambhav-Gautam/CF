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
        int arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int prev =arr[0];
        bool flag = true;
        if(n==1) cout<<"YES"<<endl;
        else{
            rep(i,1,n){
                if(abs(prev-arr[i])>1){
                    flag = false;
                    break;
                }
                prev = arr[i];
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    // Your code here
    return 0;
}
