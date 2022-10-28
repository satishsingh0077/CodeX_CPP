/* Onbject slicing means asigning a derived class object to a base class object
in this way, the base class object will not have the member variables of base class and it is getting sliced
*/

#include<iostream>
using namespace std;

class base{
    public:
    int age;
    int salary;
};
class der: public base{
public:
int roll;
int pincode;
};

int main(){
    der d1;
    d1.age = 19;
    d1.salary = 100000;
    d1.roll = 27;
    d1.pincode = 39105;

    //creating base class object and assigning the derived object to it.

    base b1= d1;
    cout<<b1.age<<endl;
    cout<<b1.salary<<endl;
    return 0;
}
