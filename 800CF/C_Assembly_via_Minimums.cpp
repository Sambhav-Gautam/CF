#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<int> b(m);
        set<int> S;
        bool flag = false;
        int count =0;
        int prev =0;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            if(i!=0 && prev!=b[i]){
                flag = true;
            }
            prev = b[i];
            S.insert(b[i]);
        }
        if(!flag){
            int  i =0;
            while(i<n){
                cout<<b[i]<<" ";
                i++;
            }
            cout<<endl;
        }
        else{
        for (auto it = S.begin(); it != S.end(); ++it) {
            cout << *it << " ";
            count++;
        }
        if(count<n){
            while(count<n){
                cout<<1000000<<" ";
                count++;
            }
        }
        cout << endl;
        }

        
    }

    return 0;
}
