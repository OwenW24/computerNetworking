#ifndef OSOCKET_HPP
#define OSOCKET_HPP
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
namespace OSK{



class OSocket{
private:  // possibly should make protected for child classes
    struct sockaddr_in address;
    int server_fd;
    int connection;
    
public:
    // constructor
    OSocket(int domain, int service, int protocol, int port, u_long interface);
    // virtual function for connecting to network
    virtual int network_connection(int server_fd, struct sockaddr_in address) = 0;
    // check that connection has been established
    void check_connection(int item);
    // getter functions
    struct sockaddr_in get_address();
    int get_socket();
    int get_connection();
};
    
} // namespace OSK


#endif /* OSOCKET_HPP */ 