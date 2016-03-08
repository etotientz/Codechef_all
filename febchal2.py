for t in range(input()):
	n,x,m=map(int,raw_input().split())
	a=list(map(int,raw_input().split()))
	q=min(2,x)
	if q==1:
		print a[0]%1000000007
	else:
		ans= m*a[0] + a[1]
		print ans%1000000007
