#include<bits/stdc++.h>
using namespace std;
int x,y,cnt=1,arr[1000001];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>y;
    for(int j=0;j<y;j++){
        arr[cnt]=i+1;
        cnt++;
    }
}
cin>>x;
for(int i=0;i<x;i++){
    cin>>y;
    cout<<arr[y]<<endl;
}
}
