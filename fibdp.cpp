#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fib(ll );
ll a,b;
ll p[100000];
int main(){
ll n,i,ans;
cin>>a>>b;
cin>>n;
ans=fib(n);
cout<<ans;
}
ll fib(ll n){
if((n==1)){p[0]=a; return p[0];}if(n==2){p[1]=b; return p[1];}
//p[n]={0};

//p[0]=a;p[1]=b;
if(p[n]==0){
p[n]=(fib(n-1)*fib(n-1))+fib(n-2);}

return p[n];}
