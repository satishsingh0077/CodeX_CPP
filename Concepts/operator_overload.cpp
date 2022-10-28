#include<iostream>
using namespace std;

class complex{
    private:
    float real, imag;
    public:
    complex(float real, float imag){
        this->real = real;
        this->imag = imag;
    }
    complex operator+(complex c){
        return complex(this->real + c. real, this->imag + c.imag);
    }
    void display(){
        cout<<"The complex number is "<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    complex c1(1.1,1.2);
    complex c2(2.3,2.4);
    complex c3 = c1+c2;
    c3.display();
}