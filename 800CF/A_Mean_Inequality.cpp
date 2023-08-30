#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for (int i = (a); i < (b); ++i)

int main() {
    fastIO();
    int TC;
	cin>>TC;
	while (TC--){
		int n;
        cin>>n;
        int arr[2*n];
		rep(x,0,2*n) cin>>arr[x];
		
		sort(arr,arr+2*n);
		
		rep(x,0,n) cout<<arr[x]<<" "<<arr[x+n]<<" ";
		cout<<endl;
	}
    // Your code here
    return 0;
}
