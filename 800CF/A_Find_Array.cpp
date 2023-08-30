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
    rep(ii,0,t){
        long long n;
        cin>>n;
        long long  i=2;
        while(n--){
            cout<< i+1 <<" ";
            i = i+1;
        }
        cout<<endl;
    }
    // Your code here
    return 0;
}
