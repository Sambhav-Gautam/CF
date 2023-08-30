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
        int l,r,k;
        cin>>l>>r>>k;
        if(l==1 && r==1) cout<<"NO"<<endl;
        else if(l==r) cout<<"YES"<<endl;
        else if(l%2){
            
            if(k>= (r-l+2)/2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(k>= (r-l+1)/2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    // Your code here
    return 0;
}
