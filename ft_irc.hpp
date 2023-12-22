#ifndef FT_IRC_H
# define FT_IRC_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>




class	Server
{
	private:
		std::string		_port;
		std::string		_password;

	public:
		Server( int port, std::string passcode);
		~Server( void );

		void	listen( void );
}

#endif

