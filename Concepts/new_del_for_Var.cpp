#include<iostream>
using namespace std;

int main(){
    // simple pointer

    int a =6;
    int* ptr = &a;

    cout<<"The vlue at address "<<ptr<<" is "<<*ptr<<endl;

    // dynamically allocation using new keyword

    int *p = new int(10); // p has the address where the value 10 is stored
    cout<<"The value at address "<<p<<" is "<<*p<<endl;

    // to deleted the dynamically allocated memory, use 
    // delete p

    // dynamically creating array

    int* arrptr = new int[3]; // 3 spaces reserved for integer variable and base address it at arrptr
    // two ways of accessing
    arrptr[0] = 100; 
    cout<<"The value at address "<<arrptr<<" is "<<*arrptr<<endl;//100
    // or
    arrptr++;
    *arrptr = 200;
    cout<<"The value at address "<<arrptr<<" is "<<arrptr[0]<<endl;//200. Using 0 because we have already incremented arrptr

    // better way of using is *(arrptr+1)= 200; because the arrayptr would still point to the base location
    // to deleted the dynamically allocated contiguous memory, use 
    // delete[] arrptr
    
}