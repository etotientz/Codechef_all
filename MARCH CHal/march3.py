for t in range(input()):
	s=raw_input()
	l=len(s)
	if l==1:
		print "NO"
		continue
	if l%2==0:
		a=s[0:l/2]
		if a==s[l/2:]:
			print "YES"
		else:
			print "NO"
	else:
		li=list(s)
		l,p=len(li),0
		for i in range(0,l):
			c=0
			a=li
			a.pop(c)
			c+=1
			b=a[0:l/2]
			if b==a[l/2:]:
				p=1
		if p==1:
			print "YES"
		else:
			print "NO"