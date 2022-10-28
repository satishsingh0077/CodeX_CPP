// values are stored in continguous memory locations
//stl array vs normal array
#include<iostream>
#include<array>
#include<typeinfo>// to get the information about variable type
using namespace std;
void value_pass(array<int,6>, int*);
int main(){
// syntax for declearing an array
array<int,6> abs = {1,2,3,4,5,6}; // this is static array
int ar[] = {11,22,33,44,55,66}; //delearing a normal array

// traversing through an array in normal way
// get size first
int size  = abs.size();
for(int i=0; i<size; i++)
{
    cout<<"value by indexing = "<<abs[i]<<endl;
    // also you can use 
    cout<<"same value by another way = "<<abs.at(i)<<endl;
}

// c++ way of traversing and getting value
cout<<"C++ way of traversing and getting value "<<endl;
for (int i:ar){
    cout<<i<<endl;
}

for (int i:abs){
    cout<<i<<endl;
}


// check if the array is empty
cout<<"Is array empty ? = "<<abs.empty()<<endl; // returns 0 for false and 1 for true
// element at the front
cout<<"first element = "<<abs.front()<<endl;
// element at the back
cout<<"last element = "<<abs.back()<<endl;

// iterator pointing to the begining of the array
auto start  = abs.begin(); // start will be variable type of integer pointer
cout<<"address = "<<start<<" & "<<"value = "<<*start<<endl;

// iterator pointing to the end of the array
auto end = abs.end();// note it opints to an address one greater than the last element
end --; // to get the last element, decrement the pointer
cout<<"address = "<<end<<" & "<<"value = "<<*end<<endl;

cout<<"tpe of variable = "<<typeid(end).name()<<endl;

value_pass(abs, ar);// passing normal and stl array to a function
}
// function taking stl array and normal array as argument
void value_pass(array<int,6>a, int* arrr){
    for(int i=0; i<6;i++)
    {
        cout<<"value from function pass = "<<a[i]<<endl;
        cout<<"value of normal aray from function pass = "<<*arrr<<endl;
        //cout<<"value of normal aray from function pass = "<<arrr[i]<<endl;// this way it can be accessed as well
        //arrr++;
    }
}