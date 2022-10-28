#include<iostream>
#include<set>

using namespace std;

int main(){
   return 0; 
   set<int> s;
   s.insert(10);
   s.insert(10);
   s.insert(11);
   s.insert(15);

   set<int>::iterator iter;
   for(iter = s.begin();iter!=s.end();iter++){
        cout<<*iter<<endl;
   }
}