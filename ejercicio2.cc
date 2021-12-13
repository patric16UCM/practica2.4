#include <sys/socket.h>
#include <netdb.h>
#include <syss/types.h>
using namespace std;
int main(int argv, char * argc[]){
struct addrinfo hints;
struct addrinfo result;
hints.ai_flags    = 0;
hints.ai_family   = AF_UNSPEC;   // IPv4 o IPv6
hints.ai_socktype = SOCK_DGRAM;
rc = getaddrinfo(argv[1], argv[2], &hints, &result);
sd = socket(result->ai_family, result->ai_socktype, 0);
bind(sd, (struct sockaddr *) result->ai_addr, result->ai_addrlen);
while (1) {
    char * d[];
   addrlen = sizeof(addr);
   c = recvfrom(sd, buf, 80, 0, (struct sockaddr *) &addr, &addrlen);
   switch (c){
       case 'd': d = ;break;
       case 't': d = ;break;
       case 'q':{printf("Saliendo...\n");return 0;};break;
       default : printf("Comando no soportado \n");
   }
     printf("Recibidos %d bytes de %s:%s\n", c, host, serv);
   getnameinfo((struct sockaddr *) &addr, addrlen, host, NI_MAXHOST,
        serv, NI_MAXSERV, NI_NUMERICHOST|NI_NUMERICSERV);
   sendto(sd, buf, d, 0, (struct sockaddr *) &addr, addrlen);
}

return 0;
}
