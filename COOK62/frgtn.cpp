#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,l,i,j,p,yc,nc,o[100];
char s[100][6],a[50][6];
cin>>t;
while(t--){o[100]={0};
cin>>n>>k;
for(i=0;i<n;i++)cin>>s[i];for(i=0;i<n;i++)o[i]=0;
while(k--){cin>>l;yc=0;
for(i=0;i<l;i++)cin>>a[i];
for(i=0;i<n;i++){for(j=0;j<l;j++){
if(strcmp(s[i],a[j])==0)o[i]=1;}
}}
for(i=0;i<n;i++){if(o[i]==1)cout<<"YES ";else cout<<"NO ";}
cout<<endl;
}}
