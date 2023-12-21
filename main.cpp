
#include "ft_irc.hpp"

//server main
	//create socket
	//bind

	//loop while the server is running
		//listen
		//accept

		//client sends ==> server recieves
		//recv()
		//send()	==> send back to client

int	main(int argc, char **argv)
{
	t_info					info;
	int					socketNumber;
	int					portNumber;
	struct sockaddr_in 	serv_addr;

	//create socket
	socketNumber = socket(AF_INET, SOCK_STREAM, 0);
	if (socketNumber == -1)
		//error: socket set up unsucessful
	
	// clear address structure
	//bzero((char *) &serv;_addr, sizeof(serv_addr));

	portNumber= atoi(argv[1]);	
	/* setup the host_addr structure for use in bind call */
	// server byte order
	serv_addr.sin_family = AF_INET;  
	// automatically be filled with current host's IP address
	serv_addr.sin_addr.s_addr = INADDR_ANY;  
	// convert short integer value for port must be converted into network byte order
	serv_addr.sin_port = htons(portNumber);
	// bind(int fd, struct sockaddr *local_addr, socklen_t addr_length)
	// bind() passes file descriptor, the address structure, 
	// and the length of the address structure
	// This bind() call will bind  the socket to the current IP address on port, portno
	if (bind(socketNumber, (struct sockaddr *) &serv_addr,
		sizeof(serv_addr)) < 0) 
		//error: binding unsuccessful
}