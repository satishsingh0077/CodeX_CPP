#include<iostream>
#include<string>

using namespace std;
// using template to make a generiv function
template<typename t1, typename t2>
t2 add(t1 a, t2 b){return (a+b);}

//template class
template<class t1, class t2>
class man{
    public:
    t1 age;
    t2 name;
    static int count;
    man(t1 age, t2 name){
        man::age = age;
        man::name  = name;
        count++;
    }
    void display(){
        cout<<"The name is "<<name<<endl;
        cout<<"The age is "<<age<<endl;
    }
};
//explicit declaration of static variable is required outside the class
template<class t1, class t2> int man<t1, t2>::count;

// Main begins here
int main(){
string first = "Hello ";
string second = "World";
cout<<add(first,second)<<endl;
cout<<add(10,12)<<endl;

// creating object of template class
// when using template class, type argument must be specified when creating the object of that class.
man<int,string> m1(17,"alpha");
m1.display();

man<int, string> m2(18,"beta");
m2.display();

//getting the count of the total number of objects created
cout<<"Total number of objects created = "<<man<int, string>::count;
}