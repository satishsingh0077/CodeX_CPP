#include<iostream>
#include<bitset>
using namespace std;

int main(){

    int val1 = 0b11;
    int val2 = 0b10;

    // we want final output to be 1011;

    val2 = val2 <<2;
    cout<<"Val 2 becomes "<<bitset<8>(val2)<<endl;
    int res = val2 | val1;
    cout<<"result "<<bitset<8>(res)<<endl;

}