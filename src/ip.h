// ####################################################################################
// IPV4

/**
 * @brief Base IPv4
 * 
 */
struct ipv4base
{
  // IP address bytes
  unsigned char bytes[4];
};

typedef struct ipv4mask
{
  struct ipv4base address;
  unsigned char cidr : 6;  
} ipv4mask;

typedef struct ipv4
{
  struct ipv4base *address;
  ipv4mask *mask;  
} ipv4;

/**
 * @brief Creates a new IPv4 base address from provided bytes
 * 
 * @param b1 {unsigned char} : first byte
 * @param b2 {unsigned char} : second byte
 * @param b3 {unsigned char} : third byte
 * @param b4 {unsigned char} : fourth byte
 * @return ip* : new IP address
 */
struct ipv4base *newIPv4BaseFromBytes(unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4);

/**
 * @brief Prints ip address
 * 
 * @param addr {ip} : ip to print
 */
void printIP(ipv4 *ip);