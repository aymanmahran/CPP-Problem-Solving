#include<bits/stdc++.h>
using namespace std;
long long x,y,z,ans=1;
set<char>s[101];
char c;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>c;
        s[j].insert(c);
    }
}
for(int i=0;i<y;i++){
    z=s[i].size();
    ans=((ans%1000000007)*(z%1000000007))%1000000007;
}
cout<<ans<<endl;
}
