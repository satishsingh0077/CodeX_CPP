#include<iostream>
#include<string>
using namespace std;


template<class t1, class t2>
void display(t1 val1, t2 val2 ){
    cout<<"val1 = "<<val1<<endl;
    cout<<"val2 = "<<val2<<endl;
}
int main(){
    // calling the function for int and string
    display<int,string>(75,"cat");
    // calling the function for float and char
    display<float, char>(27.5,'x');
}