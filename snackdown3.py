for t in range(int(raw_input())):





	l=list(raw_input())
	a=int(l[-1])
	#print a
	count=[0]*26
	l=l[:-2]
	#print l
	#a=int(l[len(l)-1])
	#a=list(l)
	#print 
	for i in range(len(l)):
		c=ord(l[i])-97
		count[c]+=1
	z=max(count)
	#print z,l
	v=0
	min=999999
	for i in range(len(count)):
		if count[i]==0:
			continue
		if count[i]<min:
			min=count[i]
	#print count
	for i in range(len(count)):
		if count[i]==z:
			v+=1
	diff=z-min
	#print min,diff
	if diff==a:
		print "0"
	elif diff<a:
		print len(l)-z
	else:
		print v*(diff-a)

