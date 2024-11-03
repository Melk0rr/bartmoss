#include "ip.h"

#include <stdio.h>
#include <stdlib.h>

struct ipv4base *createIPAddressFromBytes(unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4)
{
  struct ipv4base *newIP = malloc(sizeof(*newIP));

  if (newIP == NULL)
  {
    fprintf(stderr, "createIPAddressFromBytes::Memory allocation failed !");
    exit(1);
  }

  newIP->bytes[0] = b1;
  newIP->bytes[1] = b2;
  newIP->bytes[2] = b3;
  newIP->bytes[3] = b4;
  
  return newIP;
}

void printIP(ipv4 *ip)
{
  printf(
    "%u.%u.%u.%u\n",
    ip->address->bytes[0],
    ip->address->bytes[1],
    ip->address->bytes[2],
    ip->address->bytes[3]
  );
}