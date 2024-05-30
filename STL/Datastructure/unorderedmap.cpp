#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // CREATION 
    unordered_map<string, string> table;

    // INSERTION 
    // Method 1
    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    // Method 2 using pairs
    pair<string, string> p;
    p.first = "us";
    p.second = "United States of America";
    table.insert(p);






    // Table ka size
    cout << table.size() << endl;

    // Empty hai ya nahi 
    cout << table.empty() << endl; // empty hai to 1, warna zero 

  


    cout << table["in"] << endl;
    table["in"] = "BHARAT"; // VALUE KA UPDATE 
    cout << table["in"] << endl;


    

    // Iterator use karke table ke saare entries dikhana 
    unordered_map<string, string>::iterator it = table.begin();

    // METHOD 1    
    while (it != table.end()) {
        pair<string, string> p = *it;
        cout << "(Key: " << p.first << "), " << "(Value: " << p.second << ")" << endl;
        it++;
    }

    // METHOD 2
    it = table.begin(); // Reset iterator
    while (it != table.end()) {
        string key = it->first;
        string value = it->second;
        cout << "(Key: " << key << "), " << "(Value: " << value << ")" << endl;
        it++;
    }

    // Element ko dhoondhna
    if (table.find("in") != table.end()) {
        cout << "Key found\n";
        string value = table.at("in");
        cout << "Value for the found key is: " << value << endl;
    } else {
        cout << "Not found";
    }

    return 0;
}
