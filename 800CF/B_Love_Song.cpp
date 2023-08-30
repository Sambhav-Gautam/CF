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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    rep(ii,0,k){
        int a,b;
        cin>>a>>b;
        int sum =0;
        for(int i=a;i<=b;i++){
            int value = (s[i-1]-'a')+1;
            sum+=value;
        }
        cout<<sum<<endl;
    }
    return 0;
}
