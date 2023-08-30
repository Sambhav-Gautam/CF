#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int yu;
        cin>> yu;
        int sum=0;
        for(int i1 =0;i1<yu;i1++){
            int  a;
            cin>>a;
            sum+=a;
        }
        if(sum<yu) cout<<"1"<<endl;
        else{

            cout<<sum-yu<<endl;
        }
    }
    return 0;
}