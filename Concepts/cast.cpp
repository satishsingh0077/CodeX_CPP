#include<iostream>
#include<typeinfo>
using namespace std;
// static cast is used for type conversion from one type to another
int main(){
    int a = 100;
    float v;
    cout<<typeid(static_cast<float>(a)).name();
    cout<<"The value of v is "<<v<<endl;

    
    return 0;
}