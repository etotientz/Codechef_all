for i in range(input()):
	n,k,e,max_num=map(int,raw_input().split())
	l=[]
	my_list=[]
	for j in range(n-1):
		a=list(map(int,raw_input().split()))
		#sum2=sum(a)
		l.append(sum(a))
	l.sort(reverse=True)
	#print l
	#my_list=[]
	if e>1:

		my_list=list(map(int,raw_input().split()))
		sum1=sum(my_list)

		min_num=l[k-1]-sum1+1
		if sum1>l[k-1]:
			print "0"
			
		#print min_num,max_num
		elif min_num>max_num:
			print "Impossible"
		else:
			print min_num
	else:
		min_num=l[k-1]+1
		#print min_num,max_num
		if min_num>max_num:
			print "Impossible"
		else:
			print min_num


