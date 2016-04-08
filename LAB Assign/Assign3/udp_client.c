/*GROUP NO:9 BATCH 1
Group Members: Nitin Mohan  (13/CS/11)   Satrap Rathore (13/CS/48))*/

/*AIM:
***************************************************************************************************************************************************************
Client program will send a string to server and server will reply the client with a message telling that the input string is palindrome or not.
Note that some clients will request over UDP sockets and some will request over TCP sockets. Thus the server needs to know how to open both the TCP and UDP socket and accept the request from any one of client using accept() function plus read()and write() functions for TCP and recvfrom() for UDP. Whichever will come a first. Use the select() function to make the server wait for any one of the two connections and handle whichever comes first. All handling are iterative.
***************************************************************************************************************************************************************/


//HEADER FILES
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

//MAIN FUNCTION
void main()
{
        /*DECLARATION OF VARIABLES*/
	int clientSocket, portNum, nBytes;
 	char buffer[1024];
  	struct sockaddr_in serverAddr;
  	socklen_t addr_size;

  	/*Create UDP socket*/
  	clientSocket = socket(PF_INET, SOCK_DGRAM, 0);

  	/*Configure settings in address struct*/
  	serverAddr.sin_family = AF_INET;
  	serverAddr.sin_port = htons(50040);
  	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  	memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

  	/*Initialize size variable to be used later on*/
  	addr_size = sizeof serverAddr;


    	printf("Enter a word:");
    	scanf("%s",buffer);

    	nBytes = strlen(buffer);

    	/*Send message to server*/
    	sendto(clientSocket,buffer,nBytes,0,(struct sockaddr *)&serverAddr,addr_size);

    	/*Receive message from server*/
        nBytes = recvfrom(clientSocket,buffer,1024,0,NULL, NULL);

    	printf("%s\n",buffer);

}
