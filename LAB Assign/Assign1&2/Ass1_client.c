/*
*Networks Lab assignment as on 19 February,2016
*Group NO. 9
*Group Members: Nitin Mohan  (13/CS/11)   Satrap Rathore (13/CS/48)
*/
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

#include <sys/un.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>

int main()
{
	int sockid;
	int len;
	char buf[100];
	struct sockaddr_in sock_addr;
	int result;
	char ch[100];
		sockid = socket(AF_INET, SOCK_STREAM, 0);
		sock_addr.sin_family = AF_INET;
		sock_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
		sock_addr.sin_port =htons(50040);
		len = sizeof(sock_addr);
		result = connect(sockid, (struct sockaddr *) &sock_addr, len);
		if(result == -1) {
			perror("oops: client1");
			exit(1);
		}
		printf("enter message: ");
		scanf("%[^\n]%*c",ch);
		int size = strlen(ch)+1;
		printf("\nSending to server....\n");
		write(sockid, &size,  sizeof (int));
		write(sockid, ch, size*sizeof(char));

		char s[100];
		printf("Server replied : ");

		read(sockid, s , 13* sizeof(char));
		printf("%s\n\n",s);
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
		close(sockid);
		exit(0);
}
