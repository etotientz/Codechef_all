z=0
o=1

for i in range(input()):
	count=0
	a,k=map(int,raw_input().split())
	str=raw_input()
	if len(str)>2:
		print z
	else:
		for j in range(len(str)):
			if str[j]!='a':
				count+=1
		if count<=k:
			print o
		else:
			print z

