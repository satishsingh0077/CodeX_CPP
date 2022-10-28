// lambda allows us to write inline anonymous functions;
// [](){} this is the basic syntax of lambda
// [] = capture clause, () = paramters passer, {} = function definition 


// lambda is even more powerful because it has access to the variable of its enclosing scope
// any variable wht is declared in the scopre where lamda is used, it can access it.
// in [], we say which variable the lamda can capture. To make lamdba able to edit the captured variable, it must be passes as reference.
// [&] this menas all the variables can be accessed and modified.
//[=] this menas all the vriables can be accessed but not modified.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define line cout<<"______________________________________"<<endl;
#define lam [](int x){cout<<x<<endl;}
#define lam1 [&](int x){if(x%d == 0){cout<<x<<" is divisible by "<<d<<endl;}else{cout<<x<<" is not divisible by "<<d<<endl;}}

int main(){
    int d = 2;
    vector<int> v{1,2,3,4,5};
    // lets say for each element, we want to do something
    for_each(v.begin(),v.end(),lam);
    line;
    for_each(v.begin(),v.end(),lam1);
}

