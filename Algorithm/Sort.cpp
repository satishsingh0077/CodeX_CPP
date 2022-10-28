#include<iostream>
#include<algorithm>
#include<vector>

#define line cout<<"-------------------------------------"<<endl;
using namespace std;
bool customsort(int a, int b){
    return a%10 < b%10; // if last digit of first element is less than the last digit of other number
}
int main(){
    int arr[5] = {45,63,42,67,89};
    sort(arr,arr+4);
    for(int i:arr){cout<<i<<'\t';}cout<<endl;

    line;
    // c++ algorithm also gives begin and end function to geet the begin and end of the iterator
    int ar[6] = {13,45,63,56,98,34};
    sort(begin(ar), end(ar), less<int>());
    for(int i:ar){cout<<i<<'\t';}cout<<endl;
    // the same can be applied to list, vector etc.

    /* sort function also thakes 3rd argument as a predictor to customize the sort:
    greater
    less
    less_equal
    greater_equal
    also we can define our own predictor
    */
   line;
   vector<int> val = {13,14,75,83,25,34};
   sort(val.begin(), val.end(), greater<int>());
   for(int i:val){cout<<i<<'\t';}cout<<endl;
   line;
   // custom sort. based on the last digit of the number in ascending order
   sort(begin(val), end(val), customsort);
   for(int i:val){cout<<i<<'\t';}cout<<endl;

}