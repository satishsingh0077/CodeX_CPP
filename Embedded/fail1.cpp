#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

/* 1) Write an abstract class "i_service_handler", which has the following virtual methods:
 *     - bool process_message(uint32_t message), where message holds the following information:
 *        - service_id (8bit) + method_id (8bit) + payload (16bit)
 *        - so a message 0x12345678 would mean: 0x12 service_id, 0x34 method_id, 0x5678 payload 
 *     - uint32_t create_message()
*/

// add your code here
class i_service_handler{
public:
virtual bool process_message(uint32_t message)=0;
virtual uint32_t create_message() =0;
};

/* 2) Derive a class "service_handler" from "i_service_handler" which implements the virtual
 *    methods and has those methods and has two member:
 *    - uint8_t service_id
 *    - uint8_t method_id
 *    - uint16_t payload ( initialized with 0 )
 *    Which are given in the constructor.
 *
 *    The methods should be implemented as follows:
 *     - process_message should print and store the payload, if the message contains the service 
 *       and method IDs given in the constructor
 *     - create_message should increment the payload by 1 and return the message
 *    
*/

// add your code here
class service_handler:public i_service_handler{
public:
uint8_t service_id;
uint8_t method_id;
uint16_t payload = 0;

bool process_message(uint32_t message) override {
  uint8_t new_service_id = static_cast<uint8_t>(message>>24);
  uint8_t method_id = static_cast<uint8_t>(message>>16);
  uint32_t mask = 0x0000ffff;
  uint16_t new_payload = message & mask;
  payload = new_payload;
  return 0;
}
service_handler(uint8_t service_id, uint8_t method_id){
  this->service_id = service_id;
  this->method_id = method_id;
}
virtual uint32_t create_message() override{
  uint32_t new_message;
  uint32_t new_service_id;
  uint32_t new_method_id;
  payload ++;
  new_service_id = static_cast<uint32_t>(service_id<<24);
  new_method_id = static_cast<uint32_t>(method_id<<16);
  new_message = new_service_id|new_method_id|payload; 
  return new_message;
  

}

};


// implement the classes mentioned above so that the ouput matches the expected values
int main() {
  service_handler test_handler(0x12U, 0x34U);
  // successful processing
  test_handler.process_message(0x12345678U);
  // handler not responsible
  //test_handler.process_message(0x21345678U);
  
  printf("Expected message: %x, output: %lx \n", 0x12345679U, test_handler.create_message());
  //printf("Expected message: %x, output: %lx \n", 0x1234567aU, test_handler.create_message());

  return 0;
}