// count gives the number of occurance of something
// count_if can be used to get the occurance number based on certia condition 
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {15,15,12,12,12,13,2,3,4,5};
   auto occur = count(vec.begin(),vec.end(),12);// this will return 3 as there are 3 occurance of 12
   cout<<occur<<endl;

// lets say we want to count the number of elements that are less than 12.
// for this we will use count if and use the lambda expression as the third argument.

auto less_12 = count_if(vec.begin(),vec.end(),[](int x){return x<12;});
cout<<"Number of elements less than 12 = "<<less_12<<endl;
return 0;
}