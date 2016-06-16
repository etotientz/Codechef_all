#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t,i,j,n,k,e,max_num,d,min_reqd,o;
ll sum;
cin>>t;
while(t--){o=0;
	cin>>n>>k>>e>>max_num;
	ll a[n-1];
	for(i=0;i<n-1;i++)
		{sum=0;
		for(j=0;j<e;j++)
			{cin>>d;
			sum+=d;}
			a[o++]=sum;
		}
		sort(a,a+o,greater<int>());
		//for(i=0;i<o;i++)cout<<a[i];
		sum=0;
		if(e>1){
			for(i=0;i<e-1;i++){
				cin>>d;
				sum+=d;
			}
			if(sum>a[k-1])
				cout<<"0"<<endl;
			else
				if(a[k-1]-sum+1>max_num)
					cout<<"Impossible"<<endl;
				else
					cout<<a[k-1]-sum+1<<endl;

		}
		else{
			if(a[k-1]+1>max_num)
				cout<<"Impossible"<<endl;
			else
				cout<<a[k-1]+1<<endl;
		}
}
}