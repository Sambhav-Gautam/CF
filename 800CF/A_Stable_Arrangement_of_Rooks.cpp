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
        int a ,b;
        cin>>a;
        
        cin>>b;
        
        if(a==1){
            cout<<"R"<<endl;
        }
        else if(b > ceil(a/2.0)) cout<<-1<<endl;
        else{
            bool flag = true;
            for(int i=0;i<a;i++){
                
                for(int j =0;j<a;j++){
                    if(i==j && flag && b>0){
                        cout<<"R";
                        flag = false;
                        b--;
                    }
                    else if(i==j){flag = !flag;cout<<".";}
                    else{
                        cout<<".";
                    }
                }
                cout<<endl;
            }
        }
    }
    // Your code here
    return 0;
}
