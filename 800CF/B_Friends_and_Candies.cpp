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
        int avg =0;
        bool flag = true;
        int prev =-1;
        rep(i,0,n){
            
            cin>>arr[i];
            if(prev!=-1 && prev!=arr[i]) flag = false;
            prev = arr[i];
            avg+=arr[i];
        }
        bool v = avg%n==0;
        avg= avg/n;
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]>avg){
                count++;
            }
        }
        if(!v) cout<<-1<<endl;
        else if(flag) cout<<0<<endl;
        else if(!flag) cout<<count<<endl;
    }
    // Your code here
    return 0;
}
