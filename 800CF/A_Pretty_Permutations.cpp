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
    rep(o,0,t){
        int n;
        cin>>n;
        vector<int> v;
        
        if(n%2==0){
        for(int i=2;i<=n;i+=2){
            v.push_back(i); 
            v.push_back(i-1);
        }
        
        
        for(auto &val:v){
            cout<<val<<" ";
        }
        cout<<endl;
        }
        else{
            if(n==1){
                cout<<1<<endl;
            }
            else{
                cout<<3<<" "<<1<<" "<<2<<" ";
                for(int i =5;i<=n;i+=2){
                    v.push_back(i);
                    v.push_back(i-1);
                }
                
                for(auto &val:v){
                    cout<<val<<" ";
                }
                cout<<endl;
            }
        }


    }
    // Your code here
    return 0;
}
