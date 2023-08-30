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
    for(int i = 0; i < t; i++)
    {
        vector <int> b(7);

        for(int i = 0; i < 7; i++)
            cin >> b[i];

        cout << b[0] << ' ' << b[1] << ' ' << b[6] - b[0] - b[1] << endl;
    }
    // Your code here
    return 0;
}
