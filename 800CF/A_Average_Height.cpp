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
        int a[n];
        vector<int> a1;
        vector<int> a2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1) a1.push_back(a[i]);
            else a2.push_back(a[i]);

        }
        for(auto &val:a1){
            cout<<val <<" ";
        }
        for(auto &val:a2){
            cout<<val <<" ";
        }
        cout<<endl;
    }
    // Your code here
    return 0;
}
