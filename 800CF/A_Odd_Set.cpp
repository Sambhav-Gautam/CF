#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        int no =0;
        int ne =0;
        int yu;
        cin>> yu;
        for(int i1 =0;i1<2*yu;i1++){
            int u;
            cin>>u;
            if(u%2==0) no++;
            else ne++;
        }
        if(ne==no && ne==yu) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}