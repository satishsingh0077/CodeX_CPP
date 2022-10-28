#include <iostream>
#include<vector>

using namespace std;
int solution(vector<int> &A) {
    int size = A.size();
    int pair = 0;
    bool flag = false;
    int index = 0;

    if((A[index]+A[size-1])%2==0){
        flag = true;
        pair ++;
    }
    else{flag = false;}
    
    // condition based on pair found or not
    if(flag){index = 1;size = size-2; }else{index = 0;size = size-1;}

    for(int i=index;i<size;){
        if((A[i]+A[i+1])%2==0){
            pair ++;
            i=i+2;
        }
        else{
            i=i+1;
        }
    }
return pair;
}

int main(){
   vector<int> A = {11,12,13,35,23};
   int result = solution(A);
   cout<<result<<endl;

    return 0;
}
