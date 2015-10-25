#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,t,n,p;
cin>>t;
while(t--){p=0;
int a[1001]={0};
cin>>n;
while(n--){
cin>>j;a[j]++;
}
for(i=0;i<=1000;i++){if(a[i]>1){p=1;break;}}
if(p)cout<<"NO"<<endl;else cout<<"YES"<<endl;}}
