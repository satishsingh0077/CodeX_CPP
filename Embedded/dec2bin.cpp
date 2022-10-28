#include<iostream>
#include<string>
using namespace std;

int main(){
    int input = 15;
    string output, s,result;
    
    cout<<"Enter a number : ";
    cin>>input;
    if(input <= 0)
    {
        result.append("0");
    }
    else
    {
    while(input>=1){
        output = output + to_string(input % 2);
        input = input/2;
    }
// reverse the string
    for(int i=output.length()-1; i>=0; i--)
    {
        s = output[i];
        result.append(s);
    }
    }
    cout<<"The binary of input number is: "<<result<<endl;

    // count number of zeros and ones
    int zeros=0;
    int ones=0;
    for(char c:result){
       if(c == '0'){zeros++;}
       else{ones++;} 
    }
    cout<<"Number of zeros = "<<zeros<<endl;
    cout<<"number of ones = "<<ones<<endl;
}