#include<iostream>
using namespace std;

class class_abstract{ // abstract class because it contains a pure virtual function
int val1;
int val2;
virtual int getsum()=0; // pure virtual function
public:
class_abstract(int x, int y){
    val1 = x;
    val2 = y;
}
int get_val(){return val1+val2;}
};

class derive:public class_abstract{
public:
derive(int x, int y):class_abstract(x,y){
}
int getsum()override{ // providing the implementation of pure virtual function
    return get_val();
}
};

int main(){
    derive d1(10,12);
    cout<<d1.getsum()<<endl;
    return 0;

}