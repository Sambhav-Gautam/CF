#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        long long t;
        cin>>t;
        while(t%3!=0){
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}