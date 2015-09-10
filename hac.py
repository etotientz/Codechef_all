t=input()
a=[]
b=[]
for p in range(t):
    m=input()
    n=input()
    o=0
    for i in range(m):
        x=input()
        a.append(x)
    for j in range(n):
        x=input()
        b.append(x)
    a.sort()
    b.sort()
   # o=0
    for k in range(m):
        if b[k]>a[k]:
            print "NO"
            o=1
            break
    if o==0:
        print "YES"
    
