#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i1 =0;i1<n;i1++){
        int yu=4;
        int sum=0;
        int arr[yu];
        int max1 =0;
        int max2 =0;
        for(int i=0;i<yu;i++){
            cin>>arr[i];
            if(arr[i]>max1 ){
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i]>max2 ){
                max2 = arr[i];
            }
        }
        int p1 = max(arr[0],arr[1]);
        int p2 = max(arr[2],arr[3]);
        if((p1==max1 || p1 ==max2 ) && (p2==max1 || p2==max2)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    return 0;
}