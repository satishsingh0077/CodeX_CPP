// double ended queue
// insetion and deletion of object possible from both end
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d(5);
    for(int i=0; i<5;i++){
        d[i] = i+20;
    }

    d.push_back(100);
    d.push_front(-10);

    deque<int>::iterator iter;
    for(iter = d.begin(); iter!=d.end();iter++){
        cout<<*iter<<endl;
    }
}