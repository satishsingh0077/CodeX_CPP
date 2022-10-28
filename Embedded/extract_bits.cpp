#include <stdio.h>

using namespace std;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

int main(){
uint32_t message = 0x12345678;
printf("The message is %lx \n",message);

// defining various masks
uint32_t service_id_mask  = 0xff000000;
uint32_t message_id_mask  = 0x00ff0000;
uint32_t payload_mask     = 0x0000ffff;
// extracting service id, which is first 2 digits, 8 bits
uint8_t service_id = (message & service_id_mask)>>24;
uint8_t message_id = (message & message_id_mask)>>16;
uint16_t payload = (message & payload_mask);

printf("The service id is %x \n",service_id);
printf("The message id is %x \n",message_id);
printf("The payload is %x \n",payload);

// lets reconstruct the message
uint32_t reconstructed_message = (service_id<<24) | (message_id <<16) |(payload);
printf("The reconstructed message is %x \n",reconstructed_message);

return 0;
}