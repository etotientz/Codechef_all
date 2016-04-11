def pow(x,y,z):
	num=1
	while y:
		if y&1:
			num=num*x%z
		y>>=1
		x=x*x%z
	return num

for i in range(input()):
	n,k=map(int,raw_input().split())
	print k*pow(k-1,n-1,1000000007)%1000000007
