/*GROUP NO:9 BATCH 1
Group Members: Nitin Mohan  (13/CS/11)   Satrap Rathore (13/CS/48))*/

/*AIM:
***************************************************************************************************************************************************************
Client program will send a string to server and server will reply the client with a message telling that the input string is palindrome or not.
Note that some clients will request over UDP sockets and some will request over TCP sockets. Thus the server needs to know how to open both the TCP and UDP socket and accept the request from any one of client using accept() function plus read()and write() functions for TCP and recvfrom() for UDP. Whichever will come a first. Use the select() function to make the server wait for any one of the two connections and handle whichever comes first. All handling are iterative.
***************************************************************************************************************************************************************/

//HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

//FUNCTION TO CHECK IF STRING IS PALINDROME OR NOT
int isPallindrome(char *buf)
{
	int flag = 1,i,len;
	len = strlen(buf);
	for(i=0;i<=(len-1)/2;i++)
	{
		if(buf[i]!=buf[len-1-i])
		{
			flag =0;
			break;
		}
	}
	return flag;
}


//MAIN FUNCTION
void main()
{
	/*DECLARATION OF VARIABLES*/
	int tcpSocket,udpSocket,newtcpSocket ;
	struct sockaddr_in serv_addr,clientAddr;
  	struct sockaddr_storage serverStorage;
	socklen_t addr_size;
	fd_set readfds;
	struct timeval tv;

	int i,rv,nBytes,clilen,n,flag,len;
	char buf1[100], buf2[100];

	/*TCP SOCKET*/

	//CREATING TCP SOCKET
	if ((tcpSocket = socket(PF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("Unable to create socket\n");
		exit(0);
	}

	//INTIALISING THE SOCKET VARIABLES
	serv_addr.sin_family= AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr("127.0.0.1");
	serv_addr.sin_port=htons(50040);

	//BINDING THE TCP SOCKET
	if (bind(tcpSocket, (struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
	{
		printf("Unable to bind local address\n");
		exit(0);
	}

	//LISTENING TO 5 CALLS
	listen(tcpSocket, 5);


	/*UDP SOCKET*/

	//CREATING UDP SOCKET
	if ((udpSocket = socket(PF_INET, SOCK_DGRAM, 0)) <0)
	{
		printf("Unable to create socket\n");
		exit(0);
	}

        //INTIALISING THE SOCKET VARIABLES
	serv_addr.sin_family = AF_INET;
  	serv_addr.sin_port = htons(50015);
  	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  	memset(serv_addr.sin_zero, '\0', sizeof serv_addr.sin_zero);

	//BINDING THE UDP SOCKET
	if (bind(udpSocket, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("Unable to bind local address\n");
		exit(0);
	}

	addr_size = sizeof serverStorage;

	//finding the highest number of socket descriptor
	if (tcpSocket > udpSocket)
    		n = (tcpSocket + 1);
	else
    		n = (udpSocket + 1);


	while(1)
	{
		FD_ZERO(&readfds); //clearing the socket set
		FD_SET(tcpSocket, &readfds);//adding TCP socket to the socket set for reading
		FD_SET(udpSocket, &readfds);//adding UDP socket to the socket set for reading
		rv = select(n, &readfds, NULL, NULL, NULL);

		if (rv == -1)
		{
			perror("select"); // error occurred in select()
		}
		else if (rv == 0)
		{
			printf("No data!!");
		}
		else
		{
			// one or both of the descriptors have data
			if (FD_ISSET(tcpSocket, &readfds))
			{
				//clearing the buffer
				for(i=0;i<100;i++)
					buf1[i]='\0';

				//accepting the TCP client
				clilen = sizeof(clientAddr);
				newtcpSocket = accept(tcpSocket, (struct sockaddr *) &clientAddr,&clilen) ;
				if (newtcpSocket < 0)
				{
					printf("Accept error\n");
					exit(0);
				}

				//receiving message from client
				read(newtcpSocket, buf1, 100);

				len = strlen(buf1);
				flag = 1;
				printf("Word being received at TCP socket is %s",buf1);
				printf("\n################################\n");

				//checking word is pallindrome or not
				flag = isPallindrome(buf1);
				if(flag == 1)
					strcpy(buf1,"The word entered by you is a Palindrome");
				else
					strcpy(buf1,"The word entered by you is not a Palindrome");

				//sending the result to client
				write(newtcpSocket,buf1,strlen(buf1)+1);

				//clearing the buffer for next iteration
				for(i=0;i<100;i++)
					buf1[i]='\0';

			}
			if (FD_ISSET(udpSocket, &readfds))
			{
				//clearing the buffer
				for(i=0;i<100;i++)
					buf2[i]='\0';

				//receiving from UDP client
				nBytes = recvfrom(udpSocket,buf2,100,0,(struct sockaddr *)&serverStorage, &addr_size);
				len = strlen(buf2);
				printf("Word being received at UDP socket is %s",buf2);
				printf("\n#######################################\n");
				flag = 1;

				//checking word is pallindrome or not
				flag = isPallindrome(buf2);
				if(flag == 1)
					strcpy(buf2,"The word entered by you is a Palindrome");
				else
					strcpy(buf2,"The word entered by you is not a Palindrome");

				//sending result back to client
				sendto(udpSocket,buf2,strlen(buf2)+1,0,(struct sockaddr *)&serverStorage,addr_size);

				//clearing the buffer for next iteration
				for(i=0;i<100;i++)
					buf2[i]='\0';

			}
		}
	}
}

