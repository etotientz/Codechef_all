n=input()
a=set(map(int,raw_input().split()))
b=[]
for i in range(1,n+1):
	b.append(int(i))
b=set(b)
b=b-a
for i in b:
	print i,
