for i in range((input())):
	a=set(raw_input())
	b=set(raw_input())
	c=a&b
	if len(c)>0:
		print "Yes"
	else:
		print "No"