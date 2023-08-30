#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); i++)

int main() {
    fastIO();
    int t;
    cin>>t;
    rep(i1,0,t){
        int n, m,k, h;
        cin>>n>>m>>k>>h;
        int arr[n];
        rep(j,0,n){
            cin>>arr[j];
        }
        int count=0;
        for(int i=0;i<n;i++){
            int diff = abs(h-arr[i]);
            int check =1;
            int ui=1;
            while(ui<m && check){
                if(ui*k==diff){
                    count++;
                    check =0;
                }
                ui++;
            }
        }
        cout<<count<<endl;
    }
    // Your code here
    return 0;
}
