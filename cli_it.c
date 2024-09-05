#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netinet/in.h>


#define PORT 8000
#define SERVER_IP "127.0.0.1"
#define MAXSZ 100

int main()
{
	int sockfd; //to create socket
	struct socketadrr_in serverAddress; //client will connect on this
	int n;
	char msg1[MAXSZ];
	char msg2[MAXSZ];
	

	//create socket
	socket = socket(AF_INET,SOCKET_STREAM,0);
	//initalize the socket address
	memset(&serverAddress, 0 ,sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = inet_Addr(SERVER_IP);
	serverAddress.sin_port = htons(PORT);
	
	//client connect to server on port
	connect(sockfd,(struct sockaddr*)&serverAddresss,sizeof(serverAddress));
	//send to server and recive from server
	while(1)	
	{
		printf("\nEnter message to send server:\n");
		fgets(msg1,MAXSZ,stdin);
		if(msg1[0]=='#')
			break;
		n= strlen(sock,msg1,n,0);	
	n = recv(sockfd,msg2,MAXSZ,0)
	printf("Receiver message from server:%d\n",msg2);
	}
return 0;
}
