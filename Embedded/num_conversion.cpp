/*
int val_dec = 15   this is treated as a decimal number
int val_oct = 015 this is treated as a octal number
int val_hex = 0h15 this is treated as a hexadecimal number
int val_bin = 0b1101 this is treated as a binary number
*/

#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char result[1000];
    //char *cptr = result;
    int input = 75; // decimal number
    itoa(input, result,10);
    cout<<input<<" = "<<result<<" in decimal"<<endl;
    itoa(input, result,2);
    cout<<input<<" = "<<result<<" in binary"<<endl;
    itoa(input, result,8);
    cout<<input<<" = "<<result<<" in octal"<<endl;
    itoa(input, result,16);
    cout<<input<<" = "<<result<<" in hexadecimal"<<endl;


}