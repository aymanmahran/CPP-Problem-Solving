#include<bits/stdc++.h>
using namespace std;
string s;
int arr[300],cnt,x;
int main(){
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='@'){
        arr[cnt]=i+1;
        cnt++;
    }
}
if(arr[0]!=1&&arr[cnt-1]!=s.size()&&s.size()>=3&&cnt>=1){
for(int i=0;i<cnt-1;i++){
    if(arr[i+1]-arr[i]<=2){
        cout<<"No solution"<<endl;
        exit(0);
    }
}
for(int i=0;i<s.size();i++){
    cout<<s[i];
    if((i==arr[x])&&((x+1)<cnt)){
        cout<<",";
        x++;
    }
}
cout<<endl;
}
else{
    cout<<"No solution"<<endl;
}
}
