#include<bits/stdc++.h>
using namespace std;
long long a[4010],b[4010],s[2]={-1,-1},y[2001][2001],z;
int x,e[2],o[2],h;
int main(){
scanf("%d",&x);
for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
        scanf("%I64d",&y[i][j]);
        a[i+j]+=y[i][j];
        b[i-j+x]+=y[i][j];
    }
  }
for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
           z=a[i+j]+b[i-j+x]-y[i][j];
           h=(i+j)%2;
        if(s[h]<z){
            e[h]=i;
            o[h]=j;
            s[h]=z;
        }
     }
  }
    printf("%I64d\n%d %d %d %d\n",s[0]+s[1],e[0],o[0],e[1],o[1]);
}
