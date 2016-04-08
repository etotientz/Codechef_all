/*
*Networks Lab assignment as on 19 February,2016
*Group NO. 9
*Group Members: Nitin Mohan  (13/CS/11)   Satrap Rathore (13/CS/48)
*/
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<errno.h>
#include<ctype.h>
#include<unistd.h>
#include <netdb.h>

int main(){
	int ssockid,csockid;
	int slen,status;
	char buf[100];
	struct sockaddr_in saddr, caddr;
	ssockid = socket(AF_INET, SOCK_STREAM, 0);
	if(ssockid == -1){
		printf("socket creation failed\n");
		exit(1);
	}
	int true = 1;
	if (setsockopt(ssockid,SOL_SOCKET,SO_REUSEADDR,&true,sizeof(int)) == -1)	{
 		perror("Setsockopt");
    		exit(1);
	}
	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr =INADDR_ANY;
	saddr.sin_port =htons(50040);

	status = bind(ssockid,(struct sockaddr*)&saddr, sizeof(saddr));
	if(status == -1){
		if(errno == EBADF)
			printf("The file descriptor is invalid.\n");
		else if(errno == ENOTSOCK)
			printf("The file descriptor doesn’t refer to a socket\n");
		else if(errno == EINVAL)
			printf("The file descriptor refers to an already-named socket.\n");
		else if(errno == EADDRNOTAVAIL)
			printf("The address is unavailable.\n");
		else if(errno == EADDRINUSE)
			printf("The address has a socket bound to it already\n");
		printf("binding failed\n");
		exit(1);
	}

	listen(ssockid,5);
	printf("server waiting\n");
	int clen  = sizeof(caddr);
	csockid = accept(ssockid,(struct sockaddr *) &caddr, &clen);
	char c[101];
	int size;
	printf("\nReading from client....\n");
	read(csockid,&size,sizeof(int));
	read(csockid,c,size*sizeof(char));
	char result[20];
	strcpy(result,"Hello Client");
	printf("\nSending to client....\n");
	write(csockid,result,13* sizeof(char));

	//IP address printing
	char name[20];
	gethostname(buf,sizeof buf);
	struct hostent *hp = gethostbyname(buf);
	if (hp == NULL) {
	   	herror("gethostbyname");
	   	exit(1);
 	}
 	else {
  		 printf("%s = ", hp->h_name);
   		unsigned int i=0;
   		while ( hp -> h_addr_list[i] != NULL) {
     		printf( "%s ", inet_ntoa( *( struct in_addr*)( hp -> h_addr_list[i])));
     		i++;
  		 }
    	printf("\n");
   	exit(0);
   	}
   	close(ssockid);
  }
