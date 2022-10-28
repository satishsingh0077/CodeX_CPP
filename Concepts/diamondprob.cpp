#include<iostream>
using namespace std;

class A{public: int a;};
class B:virtual public A{public: int b;};
class C:virtual public A{public: int c;};
class D:public B, public C{public: int d;};

// here both B and C are inheriting from A and finally D is inheriting from B and C, so the status if variable "a" defined in class A becomes ambiguous
// to overcome this, virtual inheitance is used so that only one copy of grand base in inherited to grand child
/*      A
      /   \
     B     C
      \   /
        D
*/
int main(){
    D d1;
    d1.a = 10;
    cout<<d1.a<<endl;
}