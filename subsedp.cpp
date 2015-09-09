#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int qs[10000];
int maxi(int *a,int );
int main(){
int *p,t,max,i,sum,n,min,ans,m;
cin>>t;
while(t--){cin>>n;min=INT_MIN;sum=0;m=0;
p=new int[n];
for(i=0;i<n;i++){cin>>p[i];if(p[i]>=0)sum+=p[i];}

ans=maxi(p,n);
sort(p,p+n);
if(p[n-1]<0){ans=p[n-1];sum=ans;}
//if(m==1)sum=*max_element(p,p+n);
cout<<ans<<" "<<sum<<endl;
}

}
int maxi(int a[],int n)
{int max1=INT_MIN;
if(a[0]>0)qs[0]=a[0];else qs[0]=a[0];
for(int i=1;i<n;i++)
    {if(qs[i-1]+a[i]>0)
    qs[i]=qs[i-1]+a[i];else qs[i]=0;}
for(int i=0;i<n;i++){if(qs[i]>max1)max1=qs[i];}
return max1;

}
