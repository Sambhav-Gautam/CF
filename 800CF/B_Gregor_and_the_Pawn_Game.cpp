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
        int n;
        cin>>n;
        string name;
        cin>>name;
        string name1;
        cin>>name1;
        int count =0;
        for(int i=0;i<n;i++){
            if(name1[i]=='1' ){
                if(name[i]=='0'){
                    count++;
                }
                else if(name[i-1]=='1'){
                    name[i-1] ='0';
                    count++;
                }
                else if(name[i+1]=='1'){
                    name[i+1]='0';
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    // Your code here
    return 0;
}
