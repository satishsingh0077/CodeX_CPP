#include<iostream>
using namespace std;

class test{
    public:
    int val;
    test(int val){
        this->val = val;
    }
    void getval(){
        cout<<"The val is "<<val<<endl;
    }
};

int main(){
    test *t = new test(10);
    t->getval();
}