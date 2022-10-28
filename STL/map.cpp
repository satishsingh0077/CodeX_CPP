#include<iostream>
#include<string>
#include<map>
#include<list>

using namespace std;
int main(){
    map<string, int> mymap;
    mymap["satish"]= 28;
    mymap["kumar"] = 27;

    // insert elements
    mymap.insert(pair<string, int>("singh",29));

    // iterate over map to get key and value
    for(auto a:mymap){
        cout<<a.first<<"  "<<a.second<<endl;
    }

    // getting a specific value for a key
    cout<<mymap["satish"]<<endl; // 28

    // using complex data types in maps
    map<string, list<string>> pokeindex;
    list<string> pikachuattack{"thundershock","tail whip"};
    list<string> bulbasorattack{"watergun","foul smell"};
    list<string> charmanderattack{"flame throw","scary face","loud shout"};

    pokeindex["pikachu"] = pikachuattack;
    pokeindex.insert(pair<string, list<string>>("bulbasor", bulbasorattack));
    pokeindex.insert(pair<string,list<string>>("charmander",charmanderattack));

    //displaying the pokelist

    for(auto poke:pokeindex){
        cout<<poke.first<<" - ";

        for (auto attack:poke.second){
            cout<<attack<<" , ";
        }
        cout<<endl;
    }


}