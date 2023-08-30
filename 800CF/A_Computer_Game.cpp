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
        string st;
        cin>>st;
        string sc;
        cin>>sc;
        bool col[n]={false};
        int c1 =0;
        int c2=0;
        bool col1[n]={false};
        rep(i,1,n-1){
            if(!col[i] && st[i]=='0'){
                col[i]  =true;
                c1++;
            }
        }
        rep(i,1,n-1){
            if(!col[i] && sc[i]=='0'){
                col[i]  =true;
                c2++;
            }
        }
        if((c1+c2)>= n-2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    // Your code here
    return 0;
}
