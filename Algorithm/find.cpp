// find will give an iterator to the position where the value is situated.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    // the iterator will point to the value itself if it is found. 
    auto it = find(vec.begin(),vec.end(),3);
    cout<<*it<<endl;
    // If the value is not found, it will return the iterator to vec.end()
    auto it2 = find(vec.begin(), vec.end(),5);
    if(it2 ==vec.end()){cout<<"Element not found"<<endl;}
    // to get the index of the found value, substract from it an iterator to the base of the container
    else{
        // element found
        auto index = it2 - vec.begin();
        cout<<index;
    }
// you can also use find_if and pass a lambda expression as the third argument to do a specific type of search
}