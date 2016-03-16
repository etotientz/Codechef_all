def fn(t,x):
	if t==0:
		return x
	else:
		return t*fn(t-1,x)%1000003
for i in range(input()):
	n,x=map(int,raw_input().split())
	if n>=1000003 or x>=1000003 or x==0:
                print "0"
	else:
                
                print fn(n,x)
