#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    //sum of nonzero digits + number of digits
    // Your code here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int sum = 0;
        int c = 0;
        for (int i = 0; i < n-1; i++) {
            if (x[i] != '0') {
                int a = x[i] - '0'; // Convert character to integer
                sum = sum + a;
                c++;
            }
        }
        sum+=x[x.length()-1]-'0';
		cout<<sum+c<<endl;
    }
    return 0;
}
