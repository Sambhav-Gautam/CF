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
    rep(ii,0,t){
        string name;
        cin>>name;
        sort(name.begin(),name.end());
        cout<<name<<endl;
    }
    return 0;
}
