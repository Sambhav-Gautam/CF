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
        vector<int> ab(n);
        for(int i =0;i<n;i++){
            cin>>ab[i];
            
        }
        sort(ab.begin(),ab.end());
        vector<int> v;
        for(int i=0;i<n;i++){
            if(i==0 || ab[i]!=ab[i-1]){
                v.emplace_back(ab[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i>0 && ab[i]==ab[i-1]){
                v.emplace_back(ab[i]);
            }
        }
        for(auto x: v){
            cout<<x<<" ";
        }
        
        cout<<endl;
    }
    // Your code here
    return 0;
}
