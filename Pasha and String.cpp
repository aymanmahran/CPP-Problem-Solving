#include<bits/stdc++.h>
using namespace std;
string s;
int x,y,arr[200001],all;
int main(){
cin>>s>>x;
for(int i=0;i<x;i++){
    cin>>y;
    arr[y]++;
    arr[(s.size()-y)+2]--;
}
for(int i=1;i<=s.size();i++){
    all+=arr[i];
    if(all%2==0){
        cout<<s[i-1];
    }
    else{
        cout<<s[s.size()-i];
    }
}
cout<<endl;
}
