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
        int a,b;
        cin>>a>>b;
        string s ;
        cin>>s;
        int R = count(s.begin(),s.end(),'R');
        int L = count(s.begin(),s.end(),'L');
        int U = count(s.begin(),s.end(),'U');
        int D = count(s.begin(),s.end(),'D');
 
        string a1 ="";
        int x=0,y=0;
        while(x!=a){
            if(a<0){
                x--;
                a1+='L';
            }
            else{
                x++;
                a1+='R';
            }
        }
        while(y!=b){
            if(b<0){
                y--;
                a1+='D';
            }
            else{
                y++;
                a1+='U';
            }
        }
        int len = a1.length();
        bool flag = false;
        int R1 = count(a1.begin(),a1.end(),'R');
        int L1 = count(a1.begin(),a1.end(),'L');
        int U1 = count(a1.begin(),a1.end(),'U');
        int D1 = count(a1.begin(),a1.end(),'D');
        if(R>=R1 && L>=L1 && U>=U1 && D>=D1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    // Your code here
    return 0;
}
