#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        cout<<(count(st.begin(),st.end(),'N')==1 ?"NO":"YES")<<endl;
    }
    // Your code here
    return 0;
}
