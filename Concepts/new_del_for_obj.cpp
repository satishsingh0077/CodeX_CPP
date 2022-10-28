
#include<iostream>
using namespace std;

class stuff{
    public:
        int val;
        stuff(int k){
            val = k;
        }
        stuff(){
            val = 100;
        }
};

int main(){
    stuff *classptr = new stuff[10];
    cout<<(classptr->val)<<endl;
    classptr->val = 200;
    cout<<(classptr->val)<<endl;
    cout<<((classptr+1)->val)<<endl;

}