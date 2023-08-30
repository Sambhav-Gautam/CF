#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
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
        int c0=0,c1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') c0++;
            else c1++;
        }
        int a = ((s.length()-1)/2);
        cout<<min(a,min(c0,c1))<<endl;;
    }
    // Your code here
    return 0;
}
