#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int arr[3];
int main(){
cin>>a>>b>>c;
    if(a=="C")arr[0]=0;
    if(a=="C#")arr[0]=1;
    if(a=="D")arr[0]=2;
    if(a=="D#")arr[0]=3;
    if(a=="E")arr[0]=4;
    if(a=="F")arr[0]=5;
    if(a=="F#")arr[0]=6;
    if(a=="G")arr[0]=7;
    if(a=="G#")arr[0]=8;
    if(a=="A")arr[0]=9;
    if(a=="B")arr[0]=10;
    if(a=="H")arr[0]=11;

    if(b=="C")arr[1]=0;
    if(b=="C#")arr[1]=1;
    if(b=="D")arr[1]=2;
    if(b=="D#")arr[1]=3;
    if(b=="E")arr[1]=4;
    if(b=="F")arr[1]=5;
    if(b=="F#")arr[1]=6;
    if(b=="G")arr[1]=7;
    if(b=="G#")arr[1]=8;
    if(b=="A")arr[1]=9;
    if(b=="B")arr[1]=10;
    if(b=="H")arr[1]=11;


    if(c=="C")arr[2]=0;
    if(c=="C#")arr[2]=1;
    if(c=="D")arr[2]=2;
    if(c=="D#")arr[2]=3;
    if(c=="E")arr[2]=4;
    if(c=="F")arr[2]=5;
    if(c=="F#")arr[2]=6;
    if(c=="G")arr[2]=7;
    if(c=="G#")arr[2]=8;
    if(c=="A")arr[2]=9;
    if(c=="B")arr[2]=10;
    if(c=="H")arr[2]=11;

int i=0,j=1,k=2;

                int s=arr[i]+3;
                s%=12;
                int ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
                i=0;
                j=2;
                k=1;
             s=arr[i]+3;
                s%=12;
                 ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
                i=1;
                j=0;
                k=2;
             s=arr[i]+3;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
                i=1;
                j=2;
                k=0;
            s=arr[i]+3;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
                i=2;
                j=0;
                k=1;
            s=arr[i]+3;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
                i=2;
                j=1;
                k=0;
            s=arr[i]+3;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"minor"<<endl;
                    exit(0);
                }
                s=arr[i]+4;
                s%=12;
                ss=arr[i]+7;
                ss%=12;
                if(s==arr[j]&&ss==arr[k]){
                    cout<<"major"<<endl;
                    exit(0);
                }
cout<<"strange"<<endl;
}
