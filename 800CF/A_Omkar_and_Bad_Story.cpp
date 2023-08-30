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
        bool flag = false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<0) flag = true;
        }
        if(flag) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<101<<endl;
            for(int i=0;i<=100;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
    // Your code here
    return 0;
}
