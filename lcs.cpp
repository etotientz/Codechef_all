#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}

int lcs[101][101];
int findlcs(char *a,char *b,int m,int n)
{
	for(int i=0;i<=m;i++)
	lcs[i][0]=0;
	for(int i=0;i<=n;i++)
	lcs[0][i]=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]==b[j])
			lcs[i][j]=1+lcs[i-1][j-1];
			else
			lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);;
		}
	}
	return lcs[m][n];

}

int main()
{
	char a[101],b[101],m,n,ans;
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	ans=findlcs(a,b,m,n);
	printf("%d",ans);
	return 0;
}
