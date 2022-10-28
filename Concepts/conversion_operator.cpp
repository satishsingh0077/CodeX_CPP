/*
A conversion operator gives the flexibility to overload an operator in such a way that with the use of the operator
the object can be converted to another form.

lets say we want to convert the object of class test into an integer, for that we use conversion operator.
*/

#include<iostream>
using namespace std;

class test{
    public:
    int a;
    int b;

    test(int x, int y):a(x),b(y){}
    operator int(){ // this conversion operator returns a when the object is converted to an integer.
        return a;
    }
    operator (){
        return a+b;
    }
};

int main(){
    test t1(10,13);
    cout<<t1.a<<" "<<t1.b<<endl;
    int k = t1;
    cout<<k<<endl;
}