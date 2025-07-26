# Application Layer

## Principals

### Architectures

**Client Server Architecture**  

- an always on host (server) services requests from many other hosts (clients).
**Data Center**  
- houses a large number of hosts, used to create a powerful virtual server.
**P2P Architecture**
- minimal reliance on dedicated servers in data centers, instead using direct communication between pairs of intermittently connected hosts (peers). The peers are the host machines controlled by the users residing wherever the application is used.
- are *self scalable* as each peer also adds service capacity to the system by distributing files to other peers.

### Processes

**Process**  

- program running within an end system  
- processes on two different end systems communicate by exchanging *messages* across the network.
**Socket**  

- a software interface that allows a process to send and receive messages.
- also referred to as the *Application Programming Interface (API) between the application and the network.
- developers choose the transport protocol and the transport layer parameters

**IP Address**  

- 32 bit quantity that uniquely identifies a host

**Port Number**  

- identifies the receiving process/socket

### Transport Services

**Reliable Data Transfer**  

- a service that requires a guarantee that the data sent by one end system is delivered correctly and completely to another end system
- certain services may not provide reliable data transfer, this is only acceptable for *loss tolerant applications* such as multimedia applications.

#### TCP Services  

- connection oriented: client and server perform a handshaking procedure before the application level messages begin to flow. After the handshaking procedure, a *TCP connection* exists
- reliable data transfer service: delivers streams of bytes into sockets without missing or duplicating bytes. Also includes congestion-control methods which throttles a sending process when the network is congested.

#### UDP Services  

- Lightweight transport protocol, connectionless (no handshaking process), and provides unreliable data transfer (*no guarantee*). No congestion control mechanism, so data may be pumped at any rate, only bottlenecked by end-to-end throughput. 


### Application Layer Protocols

**Application Layer Protocol**  

- defines how an application's processes running on different end systems pass messages to each other. Application layer protocols define:

    - types of messages exchanged
    - syntax of messages
    - semantics of the fields
    - rules for determining sending/response protocols.

## Web & HTTP

### HTTP

**Hypertext Transfer Protocol**: the Web's application layer protocol implemented in two programs, client and server program.

- HTTP servers contain no information about clients, thus it is *stateless*
**Non-Persistent connection**: at most one object can be sent over a single TCP connection.
**Persistent connection**: Multiple object can be sent over a single TCP connection

### Cookies

**Cookie** : allows sites to keep track of users to restrict user access or serve content as a function of the user identity

### Web Caching

**Web Cache (proxy server)**: network entity that satisfies HTTP request on behalf of an origin web server by keeping copies of recently requested objects in its storage. It is both a server and a client as it receives requests/sends messages to browsers (server function), and it receives/sends messages from origin servers (client function).
**Conditional Get**: mechanism that allows a cache to check that objects are up to date, which increases its the cache's client side functionality efficiency.

## Email

**Simple Mail Transfer Protocol (SMTP)**: communication protocol used for sending and receiving email messages over the internet. 

## DNS

**Hostname**: a mnemonic identifier for a host
**Domain Name System (DNS)**: directory service that translates hostnames into IP addresses

- a distributed database implemented in a hierarchy of DNS servers and
- an application layer protocol that allows hosts to query the distributed database

Other DNS services include

- host aliasing: a host with a complicated hostname can have one or more alias names
- mail server aliasing: provides mnemonic mail addresses for a server.
- Load distribution: Busy sites are replicated over multiple servers on different end systems thus having different IP addresses.

**Root DNS servers**: provides the IP addresses of top level domain servers (TLD).
**TLD servers**: top level domains include .com, .org, .net, .edu, .gov, etc... TLD servers provide the IP addresses for authoritative DNS servers
**Authoritative DNS servers**: The storage of a specific organizations accessible DNS records mapping the names of the hosts to IP addresses, either stored on their own or outsourced to a service provider.
**Local DNS servers**: middleman between client and the DNS server hierarchy which caches request to speed up future requests.
