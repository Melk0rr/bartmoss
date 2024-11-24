// ####################################################################################
// IPV4

/**
 * @brief Base IPv4
 * 
 */
typedef struct ipv4
{
  // IP address bytes
  unsigned char bytes[4];
} ipv4;

typedef struct ipv6
{
  unsigned short segments[8];
} ipv6;

typedef struct ipv4mask
{
  struct ipv4 address;
  unsigned char cidr : 6;
} ipv4mask;

/**
 * @brief Prints ip address
 * 
 * @param addr {ip} : ip to print
 */
void printIP(ipv4 *ip);