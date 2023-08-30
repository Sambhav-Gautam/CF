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
        int n;
        cin >> n;
        char a[n][n]; // Changed data type from int to char
        int one = 0; // Changed initialization from -1 to 0
        int co, cc;
        int two = 0; // Changed initialization from -1 to 0
        int to, tc;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (a[i][j] == '*' && one == 0) { // Changed condition from a[i][j] == '*' && one == -1 to a[i][j] == '*' && one == 0
                    one = 1;
                    co = i;
                    cc = j;
                }
                else if (a[i][j] == '*' && two == 0) { // Changed condition from a[i][j] == '*' && two == -1 to a[i][j] == '*' && two == 0
                    two = 1;
                    to = i;
                    tc = j;
                }
            }
        }
        a[co][tc] = '*';
        a[co][cc] ='*';
        a[to][tc] ='*' ;
        a[to][cc] = '*';
        rep(i, 0, n) {
            rep(j, 0, n) {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
