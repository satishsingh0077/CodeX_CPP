// if the vector is full, c++ creates a new vector double of its size
// it is dynamic in nature
// dynamic indexing is possible

#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> a(5,1); //creates a vector a of type int having 5 elements and all values are initialized to 1
    cout<<"Elaments of vector a = "<<endl;
    for(int i : a){
        cout<<i<<" ";
    }
    cout<<endl;
    // copying one vector into another
    vector<int> b(a);
    cout<<"Elaments of vector b = "<<endl;
    for(int i : b){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<float> myvec;
    cout<<"capacity = "<<myvec.capacity()<<endl;// tells the space assigned for the element. Right now it is ->0
    cout<<"size = "<<myvec.size()<<endl;// tells the number of elements inside the vector. Right now it is ->0
    // adding element to the vector
    myvec.push_back(1.1);
    myvec.push_back(2.1);
    myvec.push_back(3.5);
    cout<<"capacity = "<<myvec.capacity()<<endl;// output ->4, because when 3rd element is added, vector double it from 2 to 4
    cout<<"size = "<<myvec.size()<<endl;// output->3,  because number of elements is still 3
    
    // element at the front
    cout<<"first element = "<<myvec.front()<<endl;
    // element at the back
    cout<<"last element = "<<myvec.back()<<endl;

    // printing elements of the vector before popping
    cout<<"before popping element"<<endl;
    for (float i:myvec){
        cout<<i<<endl;
    }
    myvec.pop_back(); // last element is removed. No value returned
    // printing elements of the vector after popping
    cout<<"before popping element"<<endl;
    for (float i:myvec){
        cout<<i<<endl;
    }
    
    // clearing the vector only clears the element, the memory allocated remains the same
return 0;
}