#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
ll t,j,a,diff,max1,min1,v,len;
int i;
char s;
ll c={0};
cin>>t;
while(t--){
cin>>s>>a;
len=strlen(s);
for(i=0;i<len;i++)
   c[s[i]-'a']++;
max1=0;v=0;
for(i=0;i<len;i++){
	if(c[i]>max)
		max=c[i];
}
for(i=0;i<len;i++){
	if(c[i]==max)
		v++;
}
min1=999999999;
for(i=0;i<len;i++){
	if(c[i]==0)
		continue;
	if(c[i]<min1)
		min1=c[i];

}
diff=max1-min1;
if(diff==a)
	cout<<"0"<<endl;
else if(diff<a)
	cout<<len-max1;
else cout<<v*(diff-a)<<endl;


}
	
}