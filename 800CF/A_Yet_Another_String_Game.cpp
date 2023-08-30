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
        string st;
        cin>>st;
        int n = st.length();
        char o = 'a';
        char e = 'z';
        for(int i=0;i<n;i++){
            if(st[i]==o && !(i&1)){
                st[i]= 'b';
            }
            else if(st[i]=='z' && i&1){
                st[i] = 'y';
            }
            else{
                if(i&1){
                    st[i] = e;
                }
                else st[i] =o;
            }
        }
        cout<<st<<endl;
    }
    return 0;
}
