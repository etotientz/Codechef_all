/*GROUP NO:9 BATCH 1
Group Members: Nitin Mohan  (13/CS/11)   Satrap Rathore (13/CS/48)*/

/*AIM:
***************************************************************************************************************************************************************
Client program will send a string to server and server will reply the client with a message telling that the input string is palindrome or not.
Note that some clients will request over UDP sockets and some will request over TCP sockets. Thus the server needs to know how to open both the TCP and UDP socket and accept the request from any one of client using accept() function plus read()and write() functions for TCP and recvfrom() for UDP. Whichever will come a first. Use the select() function to make the server wait for any one of the two connections and handle whichever comes first. All handling are iterative.
***************************************************************************************************************************************************************/


//HEADER FILES
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

//MAIN FUNCTION
void main()
{
        /*DECLARATION OF VARIABLES*/
	int sockfd ;
	struct sockaddr_in serv_addr;
	int i;
	char buf[100];

	//creating the socket
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("Unable to create socket\n");
		exit(0);
	}

	//Initialing the socket variables
	serv_addr.sin_family= AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
	serv_addr.sin_port=htons(50040);

	//Connecting to server
	if ((connect(sockfd, (struct sockaddr *) &serv_addr,sizeof(serv_addr))) < 0)
	{
		printf("Unable to connect to server\n");
		exit(0);
	}

	//clearing the buffer
	for(i=0; i < 100; i++)
		buf[i] = '\0';

	printf("Enter a word:");
	scanf("%s",buf);

	//sending to server
	write(sockfd, buf, strlen(buf) + 1);

	//receiving from server
	read(sockfd, buf, 100);

	printf("%s\n",buf);
	close(sockfd);

}



