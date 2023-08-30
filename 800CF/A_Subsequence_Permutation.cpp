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
    rep(ii,0,t){
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b = a;
        sort(a.begin(),a.end());
        int count =0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){count++;}
        }
        cout<<count<<endl;
    }
    // Your code here
    return 0;
}
