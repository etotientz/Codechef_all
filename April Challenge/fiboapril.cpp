#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fib[1000000];

static int sum;
void solve(ll *a, int l, int r, ll acc=0){
    if(l>r){
        //cout<<acc<<"\n";
        sum+=fib[acc]%1000000007;}
    else{
        solve(a,l+1,r,acc+a[l]);
        solve(a,l+1,r,acc);
    }
}
int main(){
    fib[0]=0;fib[1]=1;fib[2]=1;
for(ll i=3;i<1000001;i++){
    fib[i]=fib[i-1]+fib[i-2];
}

ll n,m,*a,i,l,r;
char x;
cin>>n>>m;
a=new ll[n];
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<m;i++){
    cin>>x>>l>>r;
    sum=0;
    if(x=='Q'){
//int a[]={1,2,3};
solve(a,l-1,r-1);cout<<sum%1000000007<<endl;}
else
    a[l-1]=r;
}
}
