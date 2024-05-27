#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

unordered_map<int ,int>table ;

table[1]=54;   // rollno 1 ka deskno 54 
table[2] =55;
table[3]=56;

table[2]=57;
// rollno 2 ko 57th desk reassign kardiya 

//to ieratrate in the map

unordered_map<int ,int >::iterator it;

return 0;
}