#include <iostream>
#include <vector>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int a[3]={0,0,0};
        rep(i, 0, n) {
            cin >> arr[i];
            if(a[arr[i]%3]!=0){
                a[arr[i]%3]=-1;
            }
            else  a[arr[i]%3]=i;
        }
        for(int i=0;i<3;i++){
            if(a[i]!=0 && a[i]!=-1){
                cout<<a[i]+1<<endl;
            }
        }
    }
    return 0;
}
