#include<bits/stdc++.h>
using namespace std;
long long x,y,ans;
int main(){
cin>>x;
for(int i=1;i<=x;i++){
    cin>>y;
    ans+=(1+((y-1)*i));
}
cout<<ans<<endl;
}
