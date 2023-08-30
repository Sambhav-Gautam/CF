#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    // Your code here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int sum =0;
        rep(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        
        
        if(sum==x){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            bool a1[n] ={false};

            int sum =0;
            for(int i=0;i<n;i++){
                if(sum+a[i]!=x){
                    a1[i] = true;
                    sum+=a[i];
                    cout<<a[i]<<" ";
                }
                else{
                    a1[i]  = false;
                }
            }
            for(int i=0;i<n;i++){
                if(!a1[i]){
                    a1[i] = true;
                    cout<<a[i]<<" ";
                }
            
            }
            cout<<endl;
            }
    }
    return 0;
}
