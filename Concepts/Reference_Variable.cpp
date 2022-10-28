// Reference variable is just an ALIAS

#include<iostream>
using namespace std;

#define log(k) cout<<k<<endl;
#define increment(k) k++;  //in this form, the variable k is a refence variable

void increase1(int &k){k++;} // here k takes the passed value as a reference.

int main(){
int apple = 10;
int& sheb = apple; // sheb is the reference variable which actually refers to apple itself.

sheb = 20;
log(apple);
increment(apple);
log(apple);
increase1(apple);
log(apple);
}