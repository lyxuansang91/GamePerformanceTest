#include "DefaultSocket.h"
#include <iostream>

DefaultSocket::DefaultSocket()
{
}

DefaultSocket::~DefaultSocket()
{
}
//khoi tao cho win32
#if WIN32
bool DefaultSocket::initWinSock2_0()
{
	WSADATA wsaData ;
	WORD wVersion = MAKEWORD( 2, 0 ) ;
	if ( ! WSAStartup( wVersion, &wsaData ) )
		return true ;
	return false ;
}
#endif
//Mo ket noi
bool DefaultSocket::connectSocket(const char* serverIP, int serverPort)
{
	if(!initWinSock2_0())
		return false;
	
	hClientSocket = socket(AF_INET, SOCK_STREAM, 0);
	if ( hClientSocket <0 )
	{
		WSACleanup();
		return false;
	}

	struct hostent *server;
	server = gethostbyname(serverIP);
	if (server == NULL) {
		// CCLog("ERROR, no such host/n");
		return false;
	}
	// Create the structure describing various Server parameters
	struct sockaddr_in serverAddr ;

	serverAddr . sin_family = AF_INET ;     // The address family. MUST be AF_INET
	serverAddr . sin_addr . s_addr = inet_addr(serverIP);
	serverAddr . sin_port = htons( serverPort );



	// Connect to the server
	if ( connect( hClientSocket, (struct sockaddr * ) &serverAddr, sizeof( serverAddr ) ) < 0 )
	{
        std::cout << "unable to connect server" << endl;

		closeSocket();
		return false ;
	}

	peerSocket = hClientSocket;
    // Cleanup the environm	ent initialized by WSAStartup()
    DWORD timeout = 15 * 1000;

    optval = 1;
    optlen = sizeof(optval);

    if (setsockopt(peerSocket, SOL_SOCKET, SO_RCVTIMEO, (char*)&timeout, sizeof(timeout)) < 0) {
        std::cout << "Receiving timeout Error" << endl;
    }
	return true;
}
//Gui du lieu
int DefaultSocket::sendData(const char* data, int nLength)
{
	return send( peerSocket, data, nLength, 0);
}

int	DefaultSocket::readData(vector <char> &vectorBuffer, int len)
{
	char *test = reinterpret_cast<char*>(&vectorBuffer[0]);	
	return recv(peerSocket, test, len, 0);
}

void DefaultSocket::closeSocket(){
	// CCLog("connectSocket---hClientSocket:%d", hClientSocket);
    std::cout << "close socket" << endl;
	WSACleanup();
}

DefaultSocket *DefaultSocket::_instance = 0;

DefaultSocket *DefaultSocket::getInstance() {
	if (!_instance)
		_instance = new DefaultSocket(); 
	return _instance;
}