/*Storage Classes are used to describe the features of a variable/function. These features basically include the scope, visibility and 
life-time which help us to trace the existence of a particular variable during the runtime of a program


                  STORAGE CLASS |    KEYWORD   |     LIFETIME      |    VISIBILITY  | INTITAL VALUE
                -------------------------------------------------------------------------------------     
                    AUTOMATIC   |    auto      | functional block  |    local       |     Garbage
                -------------------------------------------------------------------------------------
                    EXTERNAL    |    extern    |   whole program   |    global      |     zero
                -------------------------------------------------------------------------------------
                    STATIC      |    static    |   whole program   |    global      |     zero
                -------------------------------------------------------------------------------------
                    REGISTER    |    register  | functional block  |    local       |     Garbage
                -------------------------------------------------------------------------------------
                    MUTABLE     |    mutable   |      class        |    local       |     Garbage
                -------------------------------------------------------------------------------------
        

    Auto storage class is the automatic storage class where the compiler itself decides about the variable.
    auto a = 10;
    auto b = "Hello world";
    auto c = 13.87;

** Extern storage class tells the compiler that the variable is a global variable, public, accessible from multiple files 
   and it is defined somewhere in the included files. A normal global variable can be made extern as well by placing the ‘extern’ 
   keyword before its declaration/definition in any function/block
   extern int e;

** Static storage class makes a variable global and retain the value in function calls. The scope is the whole program.
   static int b;

** Register storage class is same as automatic except the fact that hey are stored in register rather than ran memory.
   This makes their access faster. C and old versions of C++ restricted the use of pointer to a register variable. This is not the case 
   with modern C++.
   register int x;

** Mutable storage class allows the data members of a class to be modified by a constant member function. Constant member functions 
   can not edit a member variable unless the member variable is declared as mutable.
   mutable int k;


*/
#include<iostream>
using namespace std;
void test(){
    static int val;// memory will be allocated only once and the variable will be initialized with 0. Value will be retained during function calls.
    val ++;
    cout<<val<<endl;
}
int main(){
    
    test();
    test();
    test();

    register int val;
    val = 100;
    register int* ptr = &val;
    cout<<"Value = "<<*ptr<<endl;

}