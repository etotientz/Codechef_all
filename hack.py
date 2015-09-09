t=input()

while t:
    n=input()
    k=input()
    c=0
    while n:
        d=input()
        if d<=0:
            c+=1
        n-=1
    if c<k:
        print "YES"
    else:
        print "NO"
    t-=1
    
