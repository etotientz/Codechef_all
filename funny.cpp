#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll i,j,p,t;
int a[101]={0};
int n;cin>>n;
while(n--){
    cin>>p;a[p]++;
}
for(i=0;i<101;i++){if(a[i]%2==1)cout<<i<<endl;}

}
