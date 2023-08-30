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
    rep(yu,0,t){
        int n,k;
        cin>>n>>k;
        int arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }
        int f = arr[0];
        int l = arr[n-1];
        
        int i=0;
        int check =0;
        int f1 =0;
        int l1=0;
        
            int count =0;
            int i1=0;
            while(i1<n){
                if(!check && arr[i1]==f){ count++;f1++;}
                if(!check && count ==k){
                    check =1;
                    count =0;
                }
                if(check && arr[i1]==l){
                    count++;
                    l1++;
                }
                
                i1++;
            }
        if(arr[0]!=arr[n-1] && (f1>=k && l1>=k)) cout<<"YES"<<endl;
        else if(arr[0]==arr[n-1]){
            if(f1+l1>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
    
}
return 0;
}