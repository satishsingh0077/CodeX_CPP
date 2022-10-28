// iterators are used to point to the container's memory location

#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    vector<int>::iterator vecptr;
    for(vecptr = nums.begin();vecptr<nums.end();vecptr++){
        cout<<*vecptr<<"\t";
    }
    cout<<endl;
    vecptr = nums.begin();
    // using advance method to jump to specified spots.
    advance(vecptr,3);
    cout<<*vecptr<<endl;  
// other operators: next(), previous(). These two will return an iterator.
cout<<"_____________________"<<endl;
// also we can declare the iterator on the fly
for(auto it =nums.begin();it<nums.end();it++){cout<<*it<<'\t';}cout<<endl;
cout<<"_____________________"<<endl;
array<int,5> arr = {1,2,3,4,5};
array<int,5>::iterator arrptr;
for(arrptr = arr.begin();arrptr<arr.end();arrptr++){
    cout<<*arrptr<<"\t";
}cout<<endl;

return 0;
}