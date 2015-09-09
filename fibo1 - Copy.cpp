#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){ll q,i,l,r,ans,sum;
ll p[100000];p[1]=1;p[2]=1;p[3]=0;p[4]=3;p[5]=1;p[6]=0;
for(i=1;i<=100000;i+=6){p[i]=1;p[i+1]=1;p[i+2]=0;p[i+3]=3;p[i+4]=1;p[i+5]=0;}
cin>>q;while(q--){ans=1;cin>>l>>r;
for(i=l;i<=r;i++){if(p[i]!=0)ans=ans*p[i]%4;}
cout<<ans%4<<endl;

}}
