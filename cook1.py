for i in range(input()):
	d,n=map(int,raw_input().split())
	sum=0
	
	for p in range(d):
		sum=(n)*(n+1)/2
		n=sum
	print sum
		