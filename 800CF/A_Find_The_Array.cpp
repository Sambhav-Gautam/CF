#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)


int mx(int x){

    return x*x;
}

int sum1(int x){
    int res =1;
    while(mx(res)<x){
        res+=1;
    }
    return res;
}
int main() {
    fastIO();
    int t;
    cin>>t;
    rep(i,0,t){
        int u1;
        cin>>u1;
        cout<<sum1(u1)<<endl;
    }
    // Your code here
    return 0;
}
