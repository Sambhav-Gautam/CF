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
        char min1='z';
        int index=0;
        for(int i=0;i<s.length();i++){
            if(s[i]<min1){min1 = s[i];index =i;}
        }
        cout<<min1<<" ";
        for(int i=0;i<s.length();i++){
            if (i!=index) cout<<s[i];
        }
        cout<<endl;
    }
    // Your code here
    return 0;
}
