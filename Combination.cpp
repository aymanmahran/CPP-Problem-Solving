#include<bits/stdc++.h>
using namespace std;
int x,a[10000],b[10000],score,no=1;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>a[i]>>b[i];
}
for(int i=0;i<x;i++){
    if(b[i]!=0){
        score+=a[i];
        a[i]=0;
        no+=b[i];
        no--;
    }
}
sort(a,a+x,greater<int>());
for(int i=0;i<no&&i<x;i++){
    score+=a[i];
}
cout<<score<<endl;
}
