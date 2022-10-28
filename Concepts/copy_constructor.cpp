#include<iostream>
using namespace std;


class abc{
public:
int age;
int roll;
abc(){cout<<"Default constructor called "<<endl;}// default constructor

abc(int a, int b){cout<<"Parameterized constructor called "<<endl;age = a; roll = b;}// parameterized constructor

abc(abc &x){ // passing as perference because the same object has to be modified to set its member variables
    cout<<"copy constructor called "<<endl;
    age = x.age;
    roll = x.roll;}

void disp(){
cout<<" age is "<<age<<endl;cout<<"roll is "<<roll<<endl;}
};

int main(){
abc a(12,13),b;
b = a;// DIRECT OBJECT ASSIGNMENT. member variables are directly copied
b.age = 15;
a.disp();
b.disp();

// copying object using copy constructor
abc c(a);
c.disp();

}