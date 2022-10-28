#include<iostream>
#include<bitset>

using namespace std;

int main(){
    int num = 0b1001011;
    int pos;
    cout<<"Enter the position of the bit to be set ";
    cin>>pos;

    int mask= 1<<pos;
    cout<<"Mask: "<<bitset<8>(mask)<<endl;
    cout<<"Orig: "<<bitset<8>(num)<<endl;
    num = num|mask;
    cout<<"Res:  "<<bitset<8>(num)<<endl;
}