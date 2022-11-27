#include <sys/types.h>
#include <sys/socket.h>
#include <net/if_arp.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <complex.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>
#include <net/ethernet.h>
#include <stdlib.h>

int main(int arge,char *argv{])

struct sockaddr_insin={0};

struct arpreq myarp={ {0}:

tnsigned char*ptr

intsd,

sinsin_family-AF_INET;
iffinetaton(argy[1].&sin.sin_adde)—-0)

 

printf("Ip address Entered "%s' is not valid \n"argv[I));

exit(0);

 
