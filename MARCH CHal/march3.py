for t in range(input()):
        
	S=raw_input()
	n=len(S)
	p=0
	
	r=n/2
	#print r
	if n%2==0:
                #for i in range(r):
                A=S[:r]
                B=S[r:]
              
                
                if A==B:
                        print "YES"
                else:
                        print "NO"
         
	else:
                
                
                
                A=S[:r]
                B=S[r:]
                #print A,B
                i=0
                j=0
                
                while i<len(A) and j<len(B):
                        
                        
                        
                  
                        if A[i]==B[j]:
                                
                                
                                
                                i+=1
                                j+=1
                        
                      

                        else:
                                
                               
                                j+=1
                                p+=1
                        if p==2:
                                break
                  
                if p==0 or p==1:
                        
                        
                        print "YES"

                else:
                        
                        
                        
                        A=S[:r+1]
                        A=S[r+1:]
                  
                        p=0
                        
                        i=0
                        j=0
                        while j<len(A) and i<len(B):
                                
                                
                                
                                
                                if A[j]==B[i]:
                                        
                                        
                                        i+=1
                                        j+=1
                                else:
                                        
                                        j+=1
                                        p+=1
                                if p==2:                                    
                                        break
                            
                  
                        if p==1 or p==0:
                                
                                print "YES"

                        else:
                                
                                #print p
                                print "NO"
