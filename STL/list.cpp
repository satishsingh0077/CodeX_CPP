// list allows insertion and deletion of array anywhere
// does not allow direct access to its elements
// it allows random insertion of object at random positions

#include<iostream>
#include<list>
#include<string>

using namespace std;
int main(){

    list<string> my_list = {"apple","mange","banana","orange"};
    list<string>::iterator iter;
    cout<<"before insetion"<<endl;
    for(iter = my_list.begin();iter!=my_list.end();iter++){
        cout<<*iter<<endl;
    }
    iter = my_list.begin();
    advance(iter,2);
    my_list.insert(iter, "coconut");// this will insert element at position 3

    cout<<"after insetion"<<endl;
    for(iter = my_list.begin();iter!=my_list.end();iter++){
        cout<<*iter<<endl;
    }

}
