#include<iostream>
using namespace std;
class test{
    public:
    int age;
    int id;
    test(int age,int id){
        this->age = age; // this is equivalent to setting test::age = age;
        this->id = id;
    }
    void disp(){
        cout<<"Age = "<<age<<endl;
        cout<<"ID = "<<id<<endl;
    }
};
int main(){
    test t1(10,12);
    t1.disp();

}