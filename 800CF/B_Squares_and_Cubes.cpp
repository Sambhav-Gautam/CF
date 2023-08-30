#include <iostream>
#include <set>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int t;
    cin >> t;
    rep(ii, 0, t) {
        int n;
        cin >> n;
        int count = 0;
        set<int> a;
        
        int i = 1;
        while (i*i <= n) {
            a.insert(i*i);
            i++;
        }
        
        i = 1;
        while (i*i*i <= n) {
            a.insert(i*i*i);
            i++;
        }
        
        count = a.size();
        cout << count << endl;
    }
    return 0;
}
