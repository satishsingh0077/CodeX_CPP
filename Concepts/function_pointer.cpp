// function pointers helps in passing a function to another function.
#include<iostream>
using namespace std;

int sum(int x, int y){return x+y;}
int diff(int x, int y){return x-y;}

int arithematic(int a, int b, int(*funcptr)(int, int) ){
    int result;
    result = funcptr(a,b);
    return result;
} // here in this function we can pass either sum or difference as an argument to it.

int main(){
    // creating function pointer
    int (*fptr)(int, int);
    fptr = sum;
    cout<<arithematic(10,7,fptr)<<endl;
    fptr = diff;
    cout<<arithematic(10,7,fptr)<<endl;

}