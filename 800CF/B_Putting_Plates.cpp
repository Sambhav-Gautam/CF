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
        int h,w;
        cin>>h>>w;
        if(w>=4){
            string ab = "";
            string zero ="";
            int mid = w/2;
            for(int  i=0;i<w;i++){
                if(i==mid|| i==0|| i==w-1){
                    ab +='1';
                }
                else{
                    ab+='0';
                }
                zero+='0';
            }
            bool flag = false;
            for(int i=0;i<h;i++){
                if(!flag){
                    cout<<ab<<endl;
                    flag = true;
                }
                else{cout<<zero<<endl;flag = false;}
            }
        }
        else{
            string ab = "";
            string zero ="";
            
            for(int  i=0;i<w;i++){
                if( i==0|| i==w-1){
                    ab +='1';
                }
                else{
                    ab+='0';
                }
                zero+='0';
            }
            bool flag = false;
            for(int i=0;i<h;i++){
                if(!flag){
                    cout<<ab<<endl;
                    flag = true;
                }
                else{cout<<zero<<endl;flag = false;}
            }
        }
        cout<<endl;
    }
    // Your code here
    return 0;
}
