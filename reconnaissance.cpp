#include<bits/stdc++.h>
using namespace std;
int x,ans,arr[100],a,b;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
ans=abs(arr[0]-arr[x-1]);
a=x;
b=1;
for(int i=0;i<x-1;i++){
    int h=abs(arr[i]-arr[i+1]);
    if(h<ans){
        a=i+1;
        b=i+2;
        ans=h;
    }
}
cout<<a<<" "<<b<<endl;
}
