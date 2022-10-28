/*
Constant member functions are used to restrict the modification of data members. To make a constant function able to edit a particular data member,
it must be declared as mutable.

Constant objects are restricted from being modified. Thus only constant functions can be called on constant object(except constructor). 
Regular functions are not allowed. 
*/

#include<iostream>
#include<vector>
using namespace std;

class test{
    public:
    //mutable int x; 
    int x; // constant functions have read only permission.
    mutable int y; // even constant functions can edit it as it is mutable.

    test(int a, int b):x(a),y(b){ // a constructor, though being non constant can be called on a constant object
        cout<<"Constructor has initialized member variables"<<endl;
    }
    void edit_val(int a, int b) const {
        x = a; // this will result in error because a constant function is trying to edit a mumber variable that is not mutable. To solve, make x mutable
        y = b;
    }
    vector<int> get_val()/*const*/ {
        vector<int> value = {x,y};
        return value;
    }
};

int main(){
    test t1(2,3);
    auto res = t1.get_val();
    cout<<res[0]<<endl;
    cout<<res[1]<<endl;

    // creating a constant object
    const test t2(10,12);
    auto res1 = t2.get_val(); // this will throe error as get_val is not constant. To solve make the function get_val as constant
    cout<<res1[0]<<endl;
    cout<<res1[1]<<endl;

}