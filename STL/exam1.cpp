#include <iostream>
#include<vector>

using namespace std;
int solution(vector<int> &A) {
    int size = A.size();
    cout<<"size = "<<size<<endl;
    int pair = 0;
    bool flag = false;
    int index = 0;

    cout<<"checking "<<A[index]<<" and "<<A[size-1]<<endl;
    if((A[index]+A[size-1])%2==0)
    {
        flag = true;
        pair ++;
        cout<<"FOUND!!!"<<endl;;
        cout<<"------------------------"<<endl;
    }
    else{flag = false;cout<<"NOT---FOUND!!!"<<endl; cout<<"------------------------"<<endl;}
    // condition based on pair found or not
    if(flag){index = 1;size = size-2; }else{index = 0;size = size-1;}

    for(int i=index;i<size;)
    {
        cout<<"checking "<<A[i]<<"and "<<A[i+1]<<endl;
        if((A[i]+A[i+1])%2==0)
        {
            pair ++;
            i=i+2;
            cout<<"FOUND!!!"<<endl;
            cout<<"------------------------"<<endl;
        }
        else
        {
            cout<<"NOT---FOUND!!!"<<endl;
            cout<<"------------------------"<<endl;
            i=i+1;
        }
    }
return pair;
}

int main()
{
   vector<int> A = {11,12,13,35,23};
   int result = solution(A);
   cout<<result<<endl;

    return 0;
}
