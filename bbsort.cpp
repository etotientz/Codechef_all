#include<bits/stdc++.h>
using namespace std;
void bbs();
void sst(int *,int );
void is(int *,int);
int main()
{int swap,i,j,t,n;
int p[]={5,4,3};
n=sizeof(p)/sizeof(p[0]);
bbs();
sst(p,n);
is(p,n);
/*int a[]={6,3,4,2,7};
sort(a,a+sizeof(a)/sizeof(a[0]),greater<int>);
for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
{swap=0;
for(j=0;j<sizeof(a)/sizeof(a[0])-i-1;j++){
if(a[j]>a[j+1]){
t=a[j+1];a[j+1]=a[j];a[j]=t;}swap=1;}if(swap==0)break;
}for(int k=0;k<sizeof(a)/sizeof(a[0]);k++)
cout<<a[k];*/}
void bbs(){
int n,*a,i,j,swap,t;cin>>n;
a=new int[n];
for(i=0;i<n;i++)cin>>a[i];
for(i=0;i<n;i++)
{swap=0;
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
t=a[j+1];a[j+1]=a[j];a[j]=t;}swap=1;}if(swap==0)break;
}for(int k=0;k<n;k++)
cout<<a[k];cout<<endl;
}
void sst(int p[],int n){
    int min,i,j,t;

    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){if(p[min]>p[j])min=j;}t=p[i];p[i]=p[min];p[min]=t;
    }
    for(int k=0;k<n;k++)
cout<<p[k];

}
void is(int p[],int n){int i,j,t;
    for(i=2;i<n;i++){
        t=p[i];j=i;while(p[j-1]>t&&j>=1){
        p[j+1]=p[j];j--;
    }
    p[j]=t;
}}

