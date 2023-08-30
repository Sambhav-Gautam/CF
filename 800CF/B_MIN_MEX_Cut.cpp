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
        string s;
        cin>>s;
        int count1= count(s.begin(),s.end(),'0');
        int left = s.find('0');
        int right = s.rfind('0');
        bool o = false,t=false,tt=false;
        bool cc = false;
        rep(i,0,s.length()){
            if(s[i]=='0') o=true;
            else if(s[i]=='1') t=true;
            else tt =true;
        }  
        if(count1==0) cout<<0<<endl;
        else if(right-left+1 == count1) cout<<1<<endl;
        else cout<<2<<endl;
    }
    // Your code here
    return 0;
}
