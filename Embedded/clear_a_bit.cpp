#include<iostream>
#include<bitset>

using namespace std;

int main(){
    int num = 0b10010111;
    int pos;
    cout<<"Enter the position of the bit to be cleared ";
    cin>>pos;

    int mask= 1<<pos;
    mask = ~mask;
    cout<<"Mask: "<<bitset<8>(mask)<<endl;
    cout<<"Orig: "<<bitset<8>(num)<<endl;
    num = num & mask;
    cout<<"Res:  "<<bitset<8>(num)<<endl;
}