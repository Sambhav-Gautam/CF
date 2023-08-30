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
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        vector<long long> arr(a);
        for(long long i=0;i<a;i++){
            cin>>arr[i];

        }
        sort(arr.begin(),arr.end());
        int count =0;
        long long a1 = arr[a-1];
        long long a2 = arr[a-2];
        if(b%(a1+a2)==0) cout<<(2*(b/(a1+a2)))<<endl;
        else if(b%(a1+a2)<=a1) cout<<(2*(b/(a1+a2)))+1<<endl;
        else cout<<(2*(b/(a1+a1))+2)<<endl;
    }
    return 0;
}
