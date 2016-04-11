
z=0
for i in range(input()):
	l=[]
	n=input()
	if n==1:
		print z
	else:
		for j in range(n-1):
			a,b,c=map(int,raw_input().split())
			l.append(c)
		m=max(l)
		print m
		for j in range(n-1):
			print z
