// friend function allows access of private data members
// friendship is not inherited. i.e friend function of base class will not be friend of derived class

#include<iostream>
using namespace std;

class test{
    private:
    int val;
    int val1;
    public:
    test(int x, int y){
        val = x;
        val1 = y;
    }
friend void friendfunc(test);
friend class test1;
};

class test1{
public:
void dispvar(test t){
    cout<<t.val<<endl;;
    cout<<t.val1<<endl;
}
};

// define a friends function that can access private and protected variables of a class
void friendfunc(test t){
    cout<<t.val<<endl;
    cout<<t.val1<<endl;
}

int main(){
    test t1(2,3);
    friendfunc(t1);

    test1 t2;
    t2.dispvar(t1);

}