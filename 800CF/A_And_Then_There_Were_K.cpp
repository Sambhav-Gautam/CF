#include <iostream>
#include <cmath>
using namespace std;

int findMaxK(int n) {
    int power = log2(n); // Find the largest power of 2 less than n
    return pow(2, power) - 1; // Subtract 1 to get the maximum value of k
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int result = findMaxK(n);
        cout << result << endl;
    }

    return 0;
}
