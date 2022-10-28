// for each does the operation based on the specified function as 3rd argument for each element of the container.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    for_each(vec.begin(),vec.end(),[](const int &x){cout<< x*x<<'\t';});
}