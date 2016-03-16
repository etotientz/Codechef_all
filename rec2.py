for t in range(input()):
	str=list(raw_input())
	p=[]
	c=[]
	count=int(str[0])
	for i in range(1,len(str)):
			
		if str[i].isdigit()==False:
			
			p.append(str[i])
			
		else:
			p=p*count
			count=int(str[i])
			str1 = ''.join(p)
			c.append(str1)
			p=[]
	if len(p)>0:
		p=p*count
		str1 = ''.join(p)
		c.append(str1)
		str2 = ''.join(c)
		print str2