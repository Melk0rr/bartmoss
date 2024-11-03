#include "ip.h"

#include <stdio.h>
#include <stdlib.h>

ip *createIPAddressFromBytes(unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4)
{
  ip *newIP = malloc(sizeof(*newIP));

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

void printIP(ip *addr)
{
  printf("%u.%u.%u.%u\n", addr->bytes[0], addr->bytes[1], addr->bytes[2], addr->bytes[3]);
}