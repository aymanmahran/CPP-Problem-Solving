#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,cnt=0;
cin>>x;
string s;
for(;;){
        x++;
ostringstream convert;
convert << x;
s = convert.str();
cnt++;
if(s.find("8")!=EOF){
    cout<<cnt<<endl;
    break;
}
s.clear();
}
}
