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
    cin >> t;
    while (t--) {
        string ab;
        cin >> ab;
        //cout << ab << endl;
        int n = ab.length();
        int pos = 0;
        int kth = 0;
        bool flag = false;
        char k1;
        int pos1 = 0;
        for (int i = 0; i < n; i++) {
            char v = ab[i]; // Use char here, not int
            //cout << i << " " << v << endl;
            if (i == 0 && v >= '5') { // Compare with character '5'
                pos = i;
                kth = v;
                k1 = -1;
                flag = true;
                break;
            }
            else if (v >= '5') { // Compare with character '5'
                pos = i;
                kth = v;
                flag = true ;
                k1 = ab[i - 1];
                pos1 = i - 1;
                break;
            }
        }
        if (ab == "1") { // Compare with string "1"
            cout << '1' << endl;
        }
        else if(!flag){
            cout<<ab<<endl;
        }
        else if (pos == 0) {
            string st = "10";
            for (int i = 0; i < n - 1; i++) {
                st += '0';
            }
            cout << st << endl;
        }
        else {
            if(pos==1){
                string sc = "";
                for (int i = 0; i < pos - 1; i++) {
                    sc += ab[i];
                }
                k1 = k1 + 1; // Increment the character 'k1'
                sc += k1;
                for(int i= pos;i<n;i++){
                    sc+="0";
                }
                cout << sc << endl;
            }
            else{
            string sc = "";
            for (int i = 0; i < 1; i++) {
                sc += ab[i];
            }
            k1 = k1 + 1; // Increment the character 'k1'
            sc += ab[1]+1;
            for(int i= 2;i<n;i++){
                sc+="0";
            }
            
            cout << sc << endl;
            }
        }
    }
    // Your code here
    return 0;
}
