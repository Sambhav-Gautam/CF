#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int  t;
    cin>>t;
    rep(o,0,t){
        int a,b,c;
        bool flag = true;
        
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        int diff = abs(a-b);
        int get = (mx+diff)/2;
        for(int i=1;i<=get;i++){


        }

    }
    // Your code here
    return 0;
}
