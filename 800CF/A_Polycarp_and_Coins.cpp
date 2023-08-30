#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int rem = m / 3;
        int rem1 = m/3;
        if(m%3==0) cout<<rem<<" "<<rem1<<endl;
        else if(m%3==1) cout<<rem+1<<" "<<rem1<<endl;
        else cout<<rem<<" "<<rem1+1<<endl;
    }
    return 0;
}
