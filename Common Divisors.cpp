#include<bits/stdc++.h>
using namespace std;
string s,t;
long long ans=0;
int check(string r,int period)
{
	for(int i=0;i<r.size();i++)
		if(r[i]!=t[i%period]) return 0;
	return 1;
}
int main() {
	cin>>s>>t;
	for(int i=1;i<=min(s.size(),t.size());i++)
		if(s.size()%i==0 && t.size()%i==0 && check(s,i) && check(t,i))ans++;
	cout<<ans<<endl;
}
