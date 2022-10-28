#include<iostream>
using namespace std;


class animal{
    static int count;
    int animal_id;

    public:
    void set_id(int a){
        animal_id = a;
    }
    void get_id(){
        cout<<"This animal's id is "<<animal_id<<endl;
    }
    void get_count(){ // normal member methods can access static variables 
        cout<<"The toal count is "<<count<<endl;
    }
    static void obj_count(){
        /*Static Function: It is a member function that is used to access only static data members. 
        It cannot access non-static data members not even call non-static member functions. 
        It can be called even if no objects of the class exist*/
        cout<<"Total number of objects created = "<<count<<endl;
    }
    animal(){//constructor
        count++;
    }
};
int animal::count;// initializes with zero automatically. This is required for static variables

int main(){
    animal cat,dog,rat;
    cat.set_id(1);
    cat.get_id();
    cat.get_count();
    animal::obj_count();
    return 0;
}