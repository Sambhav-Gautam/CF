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
        int arr[3];
        rep(i,0,3){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        if(arr[0]==arr[1] ){
            if(arr[2]%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }    
        else if(arr[2]==arr[1]){
            if(arr[0]%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(arr[0]+arr[1]==arr[2]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        }
    // Your code here
    return 0;
}
