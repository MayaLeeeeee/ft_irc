
#include "ft_irc.hpp"

# define BACKLOG 150


int	main(int argc, char **argv)
{
	int	serverSocket;
	int	clientSocket;

	struct sockaddr_in	serverAddress;
	struct sockaddr_in	clientAddress;
	socklen_t			clientAddressSize;

	//arg number check
	if (argc != 3)
		error_exit("Error: Wrong Number of Arguments");

	// socket connection
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSocket == -1)
		error_exit("Error: Socket Connection");

	//server info update
	memset(&serverAddress, 0, sizeof(serverAddress));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(atoi(argv[1]);)

	//binding socket & address info
	if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1)
		error_exit("Error: Socket Binding");
	
	// if everything was successful, create server and start listen
	Server server = Server(atoi(argv[1]), argv[2]);
	server.listen();
	return (0);

}