from math import *
for t in range(input()):
	size,k=map(int,raw_input().split())
	a=list(map(int,raw_input().split()))
	b=list(map(int,raw_input().split()))
	sum=0
	max=0
	for i in range(size):
                sum+=a[i]*b[i]
		b[i]=abs(b[i])
		if max<b[i]:
			max=b[i]
		
	sum+=(k*max)
	print sum
