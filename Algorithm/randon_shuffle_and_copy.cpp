// random shuffles shuffles the elements of the container randomly*.
// copy is used to copy the content of one continer to the other.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
#define line cout<<'\n'<<"___________________________________________"<<'\n'<<endl;
int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<"Before shuffling "<<endl;
    for_each(vec.begin(), vec.end(),[](const int &x){cout<<x<<'\t';});
    line;

    random_shuffle(vec.begin(),vec.end());

    cout<<"After shuffling "<<endl;
    for_each(vec.begin(), vec.end(),[](const int &x){cout<<x<<'\t';});
    line;


    vector<int> cvec;
    cvec.resize(vec.size()); // the size of the vector in which the things are to be copied must be specified
    copy(vec.begin(),vec.end(),cvec.begin());
    cout<<"Content of copy vector "<<endl;
    for_each(cvec.begin(), cvec.end(),[](const int &x){cout<<x<<'\t';});
    line;

    // using copy_if to filter the content of a container
    vector<int> filter_vec;
    filter_vec.resize(10);
    copy_if(cvec.begin(),cvec.end(),filter_vec.begin(),[](int x){return x%2==0;});
    cout<<"Even filtered vector "<<endl;
    for_each(filter_vec.begin(), filter_vec.end(),[](const int &x){cout<<x<<'\t';});


return 0;
}