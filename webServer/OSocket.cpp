#include "OSocket.hpp"

// constructor
OSK::OSocket::OSocket(int domain, int service, int protocol, int port, u_long interface){

    // define address struct
    address.sin_family = domain;
    address.sin_addr.s_addr = htonl(interface);
    address.sin_port = htons(port);


    //establish socket
    server_fd = socket(domain, service, protocol);
    check_connection(server_fd);
    
    // establish connection
    connection = network_connection(server_fd, address);
    check_connection(connection);
}

void OSK::OSocket::check_connection(int sock){
    // check that connection has been established
    if (sock < 0){
        perror("failed to connect!");
        exit(EXIT_FAILURE);
    }
}

// getter functions
struct sockaddr_in OSK::OSocket::get_address(){
    return address;
}

int OSK::OSocket::get_socket(){
    return server_fd;
}

int OSK::OSocket::get_connection(){
    return connection;
}
