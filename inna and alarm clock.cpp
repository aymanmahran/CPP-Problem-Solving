#include<bits/stdc++.h>
using namespace std;
int n,a,b,x[101],y[101],cnt,dnt;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    x[a]++;
    y[b]++;
}
for(int i=0;i<101;i++){
    if(x[i]!=0)cnt++;
    if(y[i]!=0)dnt++;
}
cout<<min(cnt,dnt)<<endl;
}
