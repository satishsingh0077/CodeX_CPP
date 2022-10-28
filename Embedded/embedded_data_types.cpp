/*
-------------------------------------------------------------------------------------------------------
bool, char, char8_t, unsigned char, signed char, __int8	             ===>   1 byte  {8 bits}
char16_t, __int16, short, unsigned short, wchar_t, __wchar_t	     ===>   2 bytes {16 bits}
char32_t, float, __int32, int, unsigned int, long, unsigned long	 ===>   4 bytes {32 bits}
double, __int64, long double, long long, unsigned long long	         ===>   8 bytes {64 bits}
-------------------------------------------------------------------------------------------------------
each binary digit occupies 1 bit
each decimal digit occupies 4 bits
each hexadecimal digit occupies 4 bits
-------------------------------------------------------------------------------------------------------
*/

#include<iostream>
#include<string>
using namespace std;

inline void line(string s){cout<<"-------------------------------------------------- "<<s<<" ------------------------------------"<<endl;}
float ft;
double db;
long double ld;


int main(){
    line("Booloan");
    cout<<"Size of  boolean = "<<sizeof(bool)<<" bytes"<<endl;

    line("Character");
    cout<<"Size of  signed char = "<<sizeof(signed char)<<" bytes"<<endl;
    cout<<"Size of  unsigned char = "<<sizeof(unsigned char)<<" bytes"<<endl;
    cout<<"Size of  wchar_t = "<<sizeof(wchar_t)<<" bytes"<<endl;
    cout<<"Size of  char16_t = "<<sizeof(char16_t)<<" bytes"<<endl;
    cout<<"Size of  char32_t = "<<sizeof(char32_t)<<" bytes"<<endl;

    line("Float");
    cout<<"Size of  float = "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of  double = "<<sizeof(double)<<" bytes"<<endl;
    cout<<"Size of  long double = "<<sizeof(long double)<<" bytes"<<endl;


    line("Integer");
    cout<<"Size of  signed integer = "<<sizeof(signed int)<<" bytes"<<endl;
    cout<<"Size of  unsigned integer = "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"Size of  short/ short int = "<<sizeof(short)<<" bytes"<<endl;
    cout<<"Size of  long/ long int = "<<sizeof(long)<<" bytes"<<endl;
    cout<<"Size of  long long / long long int = "<<sizeof(long long)<<" bytes"<<endl;
}
