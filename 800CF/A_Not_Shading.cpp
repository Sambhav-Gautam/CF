#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t;
    cin>>t;
    rep(ii,0,t){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        char arr[n][m];
        bool flag = false;
        bool flag2 = false;
        rep(i,0,n){
            rep(j,0,m){
                cin>>arr[i][j];
                if(arr[i][j]=='B'){
                    flag = true;
                }
                if(arr[i][j]=='B' && (i==r-1 || j==c-1)){
                    flag2 = true; 
                }

            }
        }
        if(!flag) cout<<-1<<endl;
        else if(arr[r-1][c-1]=='B') cout<<0<<endl;
        else if(flag2)  cout<<1<<endl;
        else cout<<2<<endl;

    }
    // Your code here
    return 0;
}
