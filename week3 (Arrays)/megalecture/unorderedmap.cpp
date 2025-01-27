#include <iostream>
#include <unordered_map> //must include tp use this
using namespace std;

int main()
{

    unordered_map<int, int> table;

    table[1] = 54; // rollno 1 ka deskno 54
    table[2] = 55;
    table[3] = 56;

    table[2] = 57;
    // rollno 2 ko 57th desk reassign kardiya

    // iterate karne ke liye yeh use karo !
    unordered_map<int, int>::iterator it;

    // method 1

    for(it = table.begin();it != table.end();it++){
        int key = it->first;  // key mei it ka first dalo
        int value =it->second;  // key mei it ka second dalo
        cout<<"Key :"<<key<<" "<<"Value :"<<value<<" "<<endl;
    }

    // METHOD 2

    for (auto it : table)
    {
        int key = it.first;
        int value = it.second;
        cout << "Key: " << key << " " << "Value: " << value << " " << endl;
    }

    // find karne ke liye use karo find  end se equal nhi hona chahite ykuki end toh bahar hota

    if (table.find(2) != table.end()) {
        int value = table[2];
        cout <<"Found "<< value << endl;
    }
    else {
        cout << "not found!";
    }

 
 // deletion element 

    table.erase(2);
    cout<<"After deletion\n";
       for (auto it : table)
    {
        int key = it.first;
        int value = it.second;
        cout << "Key: " << key << " " << "Value: " << value << " " << endl;
    }

    return 0;
}