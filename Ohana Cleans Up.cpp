#include<bits/stdc++.h>
using namespace std;
int x,ans;
string s[100];
map<string,int>arr;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>s[i];
    arr[s[i]]++;
}
for(int i=0;i<x;i++){
    ans=max(ans,arr[s[i]]);
}
cout<<ans<<endl;
}
