// using new operator calls the constructor for the class but malloc does not
#include<iostream>
using namespace std;

class test{
    public:
    int a;
    int b;
    test(int x = 10){ // this is the constructor
        a = x;
        cout<<"Constructor call"<<endl;
    }
    
};


int main(){
    // using new operator
    test *ptr = new test[5]; // creating 5 dynamically allocated objects. constructor will be called 5 times.
    // note that this process requires a default constructor or a constructor with default arguments.
    // accessing individual objects in 2 ways. Either (ptr+i)->  or by using ptr[i]

    //remember *(ptr).a  is same as ptr->a
    cout<<ptr[0].a<<endl; // will return 10
    delete[] ptr;

    // using malloc 
    test *ptr1 = static_cast<test*>(malloc(5*sizeof(test)));
    // here the constructor will not be called and accessing the variable will return garbage value
    cout<<ptr1[0].a<<endl; // will return garbage value
    delete[] ptr1;

}