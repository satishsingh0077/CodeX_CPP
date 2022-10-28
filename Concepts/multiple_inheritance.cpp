// setting base class variables from derived class constructor
#include<iostream>
using namespace std;

class base{
    public:
    int a;
    int b;
    base(int x1, int x2){
        a= x1;
        b= x2;
    }
};
class base1{
    public:
    int a1;
    base1(int k){a1 = k;}
};

class derived:public base,public base1{
    public:
    int c;
    derived(int x,int y,int z,int l):base(x,y),base1(l){// in this way we can pass value to the base class constructors
        c= z;
        
    }
};

int main(){
    derived d1(10,11,12,13);
    cout<<d1.a<<" "<<d1.b<<" "<<d1.c<<" "<<d1.a1<<endl;
}