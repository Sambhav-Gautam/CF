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
    rep(o,0,t){
        int n ;
        cin>>n;
        if(n<10) cout<<n<<endl;
        else{
            int count =0;
            for(int i=1;i<10;i++){
                count++;
                int aux  = i;
                int n1 =10;
                while(true){
                    aux = aux*n1 + aux;
                    if(aux<=n)count++;
                    else break;
                }
            }
            cout<<count<<endl;
        }
    }
    // Your code here
    return 0;
}
