/* a virtual function is defined in base class and redefined in derived class
when inviked through a base class pointer, the most derived version of virtual function is called

a pure virtual function forces the derived class to have its implementation
syntax =>   virtual returntype func() = 0.  =0 is called pure virtual specifier
a class that have atleast one virtual function is called an abstract class.
objects derived from abstract class must provide the implementation of pure virtual function else they are also abstract.
object creation of abstract class is not allowed but pointer is.  
*/
#include<iostream>
using namespace std;

class testvirtual{
    public:
    int a;
    virtual void seta(int val){ // virtual function
        cout<<"From base class"<<endl;
    } 
};

class derived:public testvirtual{
    public:
    void seta(int val){
        cout<<"From derived class"<<endl;
        a = val; // inheriting class providing reimplementation of virtual function
    }
    void disp(){cout<<"The value of a is : "<<a<<endl;}
};


int main(){
    // accesing derived object with base class pointer
    testvirtual *tv = new derived();
    tv->seta(100);
    // to acess the member of derived class, we will use static cast
    static_cast<derived*>(tv)->disp();
}