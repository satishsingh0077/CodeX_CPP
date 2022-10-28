#include<iostream>
using namespace std;


int sum(int a, int b){
    cout<<"Hitting first sum"<<endl;
    return a+b;
}
float sum(float a, float b){
    cout<<"Hitting second sum"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"Hitting third sum"<<endl;
    return a+b+c;
}
int main(){
    float res = 0;
    res = sum(10,12);
cout<<res<<endl;
res = sum(5.5f,2.3f);
cout<<res<<endl;
res = sum(2,3,10);
cout<<res<<endl;
return 0;
}