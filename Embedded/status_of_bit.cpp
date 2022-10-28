#include<iostream>
#include <bitset>
using namespace std;

int main(){
    cout<<"Enter the bit whose status you want to check: ";
    int n;
    cin>>n;
    int num = 0b1101;
    int mask = (1<<n);
    cout<<"Mask = "<<bitset<8>(mask)<<endl;
    int result = (num & mask);
    cout<<"Result = "<<result<<endl;
    if(result == 0){
        cout<<n<<"th Bit of input is not set"<<endl;        
    }
    else{
        cout<<n<<"th Bit of input is set"<<endl;
    }
}
