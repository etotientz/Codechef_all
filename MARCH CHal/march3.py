for t in range(input()):
	S=raw_input()
	n=len(S)
	p=0
	if n%2==0:
        
              for i in range(n/2):
                  A[i]=S[i]
                  B[i]=S[(n/2)+i]
              
              A[i]='\0'
              B[i]='\0'
              if A==B:
                          print "YES"
              else:
                          print "NO"
         
	else:
                for i in range(n/2):
              
                  A[i]=S[i]
                  B[i]=S[i+(n/2)]
              
                #B[i]=S[i+(n/2)]
                A[i]='\0'
                i+=1
                B[i+(n/2)]='\0'
                i=0;
                j=0;
                while A[i]!='\0' and B[j]!='\0':
                  
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
                  
                        p=0
                        for i in range(n/2):
                        
                            A[i]=S[i]
                            B[i]=S[i+(n/2)+1]
                        

                        B[i]='\0'
                        #A[i]=S[i]
                        i+=1
                        A[i]='\0'
                        i=0
                        j=0
                        while A[j]!='\0' and B[i]!='\0':
                  
                              if A[j]==B[i]:
                      
                                 i+=1
                                 j+=1
                      

                              else:
                      
                                 j+=1
                                 p+=1
                         

                              if p==2:
                    `                   break
                  
                        if p==1 or p==0:
                                  print "YES"

                        else:
                          print "NO"
                  
             















