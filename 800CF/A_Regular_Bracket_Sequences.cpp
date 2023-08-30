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
        int n;
        cin>>n;
        bool c = false;
        bool o = false;
        rep(i,0,n){
            cout<<"()";
        }
        cout<<endl;
        int  k =1;
        int n1 = n-1;
        rep(j,0,n-1){
            rep(i,0,k){
                cout<<"(";
            }
            rep(i,0,n1){
                cout<<"()";
            }
            rep(i,0,k){
                cout<<")";
            }
            k++;
            n1--;
            cout<<endl;
        }
    }
    // Your code here
    return 0;
}
