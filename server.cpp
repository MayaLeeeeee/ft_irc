
#include "ft_irc.hpp"

	private:
		std::string		_port;
		std::string		_passcode;

	public:
		Server( int port, std::string passcode);
		~Server();

		void	listen( void );

Server::Server(int port, std::string passcode)
{
	_port = port;
	_passcode = passcode;
	//
}

Server::~Server( void )
{

}

void	Server::listen( void )
{
	while (this->isRunning())
	{
		//poll
		//loop through clients and check for activity

		//if a client activity is detected
			//accept connection (accept function)
	}
}