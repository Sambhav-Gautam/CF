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
        int n,m,k;
        cin>>n>>m>>k;
        int j1 =k;
        int count =1;

        while(n%2==0){
            n/=2;
                count*=2;
        }
        while(m%2==0){
                m/=2;
                count*=2;
        }
            
            
        if( count>=j1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    // Your code here
    return 0;
}
