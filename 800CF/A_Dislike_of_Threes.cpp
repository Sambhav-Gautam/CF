#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int yu;
        cin>> yu;
        int i1=1;
        int count =0;

        int ans;
        while(count<yu){
            if(i1%10!=3 && i1%3!=0){
                ans =i1;
                count++;
            }
            i1++; 
        }
        cout<<ans<<endl;
            
    }
    return 0;
}