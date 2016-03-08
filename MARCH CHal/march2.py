from math import *
for t in range(input()):
	size,k=map(int,raw_input().split())
	a=list(map(int,raw_input().split()))
	b=list(map(int,raw_input().split()))
	c=[]
	d=[]
	for i in range(size):
                c.append(abs(b[i]))
        for i in range(size):
                d.append(abs(a[i]))
        m=max(c)
        m1=max(d)
        index1=c.index(m)
        index2=d.index(m1)
	#print index1,index2
        if m>=m1:
                if b[index1]<0 and a[index1]<0:
                        a[index1]-=k
                elif b[index1]<0 and a[index1]>=0:
                        a[index1]-=k
                elif b[index1]>=0 and a[index1]>=0:
                        a[index1]+=k
                elif b[index1]>=0 and a[index1]<0:
                        a[index1]+=k
        else:
                #print "yes"
                if a[index2]<0 and b[index2]<0:
                        b[index2]-=k
                elif a[index2]<0 and b[index2]>=0:
                        b[index2]-=k
                elif a[index2]>=0 and b[index2]>=0:
                        b[index2]+=k
                elif a[index2]>=0 and b[index2]<0:
                        b[index2]+=k
                
                
        sum=0
        ans=0
        for o in range(0,len(a)):
                ans=a[o]*b[o]
                sum+=ans
        print sum
