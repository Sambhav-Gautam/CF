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
    rep(i,0,t){
        int n;
        cin>>n;
        int mx = 0;
        int count =1;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int prev = a[0];
        for(int i=1;i<n;i++){
            if(a[i]==prev){
                mx = max(mx,count);
                count++;
                
            }
            else{
                mx = max(mx,count);
                count=1;
            }
            prev = a[i];
        }
        mx = max(mx,count);
        cout<<mx<<endl;
    }
    // Your code here
    return 0;
}
