#include<bits/stdc++.h>
using namespace std;
#define gc getchar
int rt() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main(){
int sum1,t,i,l,r,j,p,rev,sum;
t=rt();
while(t--){
l=rt();r=rt();
sum1=0;
for(i=l;i<=r;i++)
{
p=i;sum=0;rev=0;
while(p){rev=rev*10;
rev=(rev+p%10);
p=p/10;}
if(rev==i)sum1+=rev;}
cout<<sum1<<endl;}
}
