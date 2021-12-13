#include <sys/socket.h>
#include <netdb.h>
#include <syss/types.h>
using namespace std;
int main(int argv, char * argc[]){
struct addrinfo *hints;
struct addrinfo **res;
getaddrinfo(argc[1], NULL, hints,res);
socklen_t resultado = res.ai_addr;
for(;resultado != NULL;resultado.ai_next){

getnameinfo(resultado, res.ai_addrlen,host,NI_MAXHOST,serv, NI_MAXSERV, NI_NUMERICHOST);
printf("Direccion numerica IP %d \n",HOST);
printf("Familia de protocolos \n",addrinfo.ai_family);//DEL PRIMERO
printf("Tipo de socket \n",addrinfo.ai_socktype);//DEL PRIMERO
}
return 0;
}
