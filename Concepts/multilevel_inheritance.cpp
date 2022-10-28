// setting base class variables from derived class constructor
#include<iostream>
using namespace std;

class base1{
    public:
    int x;
    base1(int a){x=a;}
};
class base2:public base1{
    public:
    int y;
    base2(int a, int b):base1(a){// setting values of base class member variables
        y = b;
    }
};

class derived:public base2{
    public:
    int z;
    derived(int a, int b, int c):base2(a,b){// setting values of base1 class member variables
    z = c;
    }
};


int main(){
    derived d1(100,200,300);
    cout<<d1.x<<" "<<d1.y<<" "<<d1.z<<endl;
    return 0;
}